const int trigPin = 9;
const int echoPin = 10;
const int LED = 13;
const boolean debug = true;

long duration, cm;
int blinkrate = 0;

void setup() {
  // put your setup code here, to run once:
  if(debug){
    Serial.begin(9600);
    Serial.println("Starting blinker");  
  }
  pinMode(LED, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  duration = pulseIn(echoPin, HIGH);
  cm = microsecondsToCentimeters(duration);

  if(cm < 100){
    if(cm < 30) {
      blinkrate = map(cm, 1, 30, 10, 300);
    }
    else if(cm < 90){
    blinkrate = map(cm, 30, 90, 300, 1000);
    }
    else{
      blinkrate = 0;
    }
    
    if(debug){
    Serial.print(" cm: ");
    Serial.print(cm);
    Serial.print(" blinkrate: ");
    Serial.println(blinkrate);
    }
    
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(blinkrate);                       // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(blinkrate);
  }

  delay(20);
    
}

long microsecondsToCentimeters(long microseconds) {
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the object we
  // take half of the distance travelled.
  return microseconds / 29 / 2;

}
