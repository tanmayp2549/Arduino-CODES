#define my_led 7
#define your_led 4
void setup() {
  pinMode(my_led, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  while(true){
  digitalWrite(my_led, HIGH);
  delay(1000);
  digitalWrite(my_led, LOW);
  //delay(1000);
  digitalWrite(your_led, HIGH);
  delay(1000);
  digitalWrite(your_led, LOW);
  //delay(1000);
  // put your main code here, to run repeatedly:
  }
}