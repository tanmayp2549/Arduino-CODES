#define led 4
#define button 8

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(button, INPUT);         
}

void loop() {
  // put your main code here, to run repeatedly:
bool x =  digitalRead(button);
  Serial.print("Button status = ");
    Serial.println(x);

if (x == 1){
  digitalWrite(led, HIGH);
  Serial.println("led turns ON");
}
else{
  digitalWrite(led, LOW);
  Serial.println("led turns OFF");
}
}
