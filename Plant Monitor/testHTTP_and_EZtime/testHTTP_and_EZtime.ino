#include <ESP8266WiFi.h>  
#include <ezTime.h>
//We need to include the ESP8266WiFi library to access code that others have already written that makes it easier for us to connect to the internet.

const char* ssid = "ssid";
const char* password = "password";
const char* host = "host";

Timezone GB;

void setup() {
  
  Serial.begin(115200);
  delay(100);

  // We start by connecting to a WiFi network
  Serial.println("");
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid,password);

  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
    }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP Address: ");
  Serial.println(WiFi.localIP());

  //ezTime
  waitForSync();
  Serial.println("UTC: " + UTC.dateTime());
  GB.setLocation("Europe/London");
  Serial.println("London time: " + GB.dateTime());
  
}



void loop() {

  delay(5000);
  Serial.println("-------------------------");
  Serial.print("Connecting to ");
  Serial.print(host);

  // Use WiFiClient class to create TCP connections
  // In the main sketch loop we start by trying to make a connection to the host server (the web site specified in the global variables). We use the WiFiClient class to construct a client, define the port it should connect via, and then try to establish a connection. If the connection fails then an error message is shown and the function is terminated at this point - meaning the sketch ends since we are in the main loop.
  WiFiClient client;
  const int httpPort = 80;
  if(!client.connect(host,httpPort)){
    Serial.println("connection failed");
    return;
    }


  // We now create a URI for the request
  String url = "/data/index.html";
  Serial.print("Requesting URL: ");
  Serial.println(host + url);


  // This will send the request to the server
  // In the section above we compose the URI for the web page we want to query and then make a GET request to that URI passing in some headers.
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
  delay(500);

  


  // Read all the lines of the reply from server and print them to Serial
  // This final section of code takes the response from the server and prints out the received information including the page meta data and the content of the page itself.
  while(client.available()){
    String line = client.readStringUntil('\r');
    Serial.print(line);
    }

  Serial.println();
  Serial.println("closing connection");

  // In the ‘Examples>ESP8266xxx folders are several more examples of ways in which this board can connect to the internet / act as a server.


  //ezTime
  delay(1000);
  Serial.println(GB.dateTime("H:i:s")); // UTC.dateTime("l, d-M-y H:i:s.v T")
}
