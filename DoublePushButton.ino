#define led1 4
#define led2 2
#define button1 8
#define button2 12


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(button1, INPUT);         
}

void loop() {
  // put your main code here, to run repeatedly:
bool x =  digitalRead(button1);
  Serial.print("Button status = ");
    Serial.println(x);
  bool y = digitalRead(button2);
  Serial.print("Button status = ");
    Serial.println(y);

if (x == 1){
  digitalWrite(led1, HIGH);
  Serial.println("led turns ON");
}
  else{
  digitalWrite(led1, LOW);
  Serial.println("led turns OFF");
}
  if (y == 1){
    digitalWrite(led2, HIGH);
    Serial.println("led turns ON");
  }
  else{
  digitalWrite(led2, LOW);
  Serial.println("led turns OFF");
}
}