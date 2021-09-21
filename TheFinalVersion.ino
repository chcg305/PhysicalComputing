#define PIN_LED 13
bool toggle,button; //set the two global variables

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  toggle = button = false ; //reset the two global variables
  digitalWrite(PIN_LED, button ); // turn off LED.
}

void loop() {
  toggle=!toggle ; // reverse the toggle's status
  button=toggle; // put the toggle in to the button.
  Serial.println(button); //check the button
  digitalWrite(PIN_LED, button) ; // update LED status.
  delay(1000); //wait for 1,000 milliseconds
  }
