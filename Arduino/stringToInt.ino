String inString = "";    // string to hold input
int batteryStatus;
#define RELAY_SWITCH 7

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // send an intro:
  Serial.println("\n\nString toInt():");
  Serial.println();
}

void loop() {
  // Read serial input:
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    if (isDigit(inChar)) {
      // convert the incoming byte to a char and add it to the string:
      inString += (char)inChar;
    }
    if (inChar == '\n') {
      batteryStatus = inString.toInt();
      Serial.print("Value:");
      Serial.println(batteryStatus);
      inString = ""; // clear the string for new input:
      if(batteryStatus){
        digitalWrite(RELAY_SWITCH, HIGH);
        Serial.println("On relay");
      }
      else{
        digitalWrite(RELAY_SWITCH, LOW);
        Serial.println("Off relay");
      }
    }
  }
}
