#define PIN_LED 7
bool on,off; //set the two global variables

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  on = false ; //reset the two global variables
  off = true ; //reset the two global variables
  digitalWrite(PIN_LED,on); // turn on LED.
  delay(1000);
  int i;
  for(i=1; i<=5; i++)
  {
  digitalWrite(PIN_LED,off); // turn off LED.
  delay(100);
  digitalWrite(PIN_LED,on); // turn on LED.
  delay(100);
  }
}

void loop() {
  while(1) {
  digitalWrite(PIN_LED,off);
  }
}
