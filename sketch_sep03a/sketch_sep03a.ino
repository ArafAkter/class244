 define PUSHBUTTON_pin 12
 define LED_PIN 26
 int BUTTON = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED_PIN,OUTPUT;
 pinMode(PUSHBUTTON_PIN,INPUT_PULLUP)
}

void loop() {
  // put your main code here, to run repeatedly:
button = digitalRead(PUSHBUTTON_PIN);
if(button == LOW){
  digitalwrite(LED_PIN,HIGH);
  delay(100);
}
else{
   digitalwrite(LED_PIN,LOW);
  }
}
