
// ---------- Rangefinder ----------
const int trigPin = 2;
const int echoPin = 3;
const boolean debug = true;

long duration, cm;
long microsecondsToCentimeters(long microseconds) {
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the object we
  // take half of the distance travelled.
  return microseconds / 29 / 2;

}


// ---------- LED ----------

unsigned long previousTime = 0;
int led = 4;
long interval = 1000;




// ---------- SETUP ----------

void setup() {
  
  // --- Rangefinder ---
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // --- LED ---
  for(int x = 4; x<9; x++){
    pinMode(x, OUTPUT);
    };
  pinMode(12, OUTPUT);
}


// ---------- LOOP ----------

void loop() {
  // --- Rangefinder ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  duration = pulseIn(echoPin, HIGH);
  cm = microsecondsToCentimeters(duration);

  if(cm < 10){
    unsigned long currentTime = millis();
    if(currentTime - previousTime > interval){
    previousTime = currentTime;
    digitalWrite(led,HIGH);
    led++;
    digitalWrite(12, HIGH);
    if(digitalRead(8) == 1) {
      digitalWrite(12, HIGH);
      delay(500);
      digitalWrite(12, LOW);
      delay(500);
      };
    }
  }
}
