#include <DigiCDC.h>

void setup() {
  SerialUSB.begin();
}

void loop() {
  SerialUSB.println("Hello World");

}
