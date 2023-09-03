define Buzzer 26

const int VALUE_THRESHOLD = 20;

int TOUCH_SENSOR_VALUE_1;
int TOUCH_SENSOR_VALUE_2;
int TOUCH_SENSOR_VALUE_3;

void setup() {
  // put your setup code here, to run once:
pinMode(Buzzer,OUTPUT);
Serial.begin(115200);
delay(2000);
digitalwrite(Buzzer,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
TOUCH_SENSOR_VALUE_1 = touchRead(T5)
TOUCH_SENSOR_VALUE_2 = touchRead(T6)
TOUCH_SENSOR_VALUE_3 = touchRead(T7)

Serial.print("TOUCH_SENSOR_VALUE_1");
Serial.print(TOUCH_SENSOR_VALUE 1:);
Serial.print(" ");

Serial.print("TOUCH_SENSOR_VALUE_2");
Serial.print(TOUCH_SENSOR_VALUE 2:);
Serial.print(" ");

Serial.print("TOUCH_SENSOR_VALUE_3");
Serial.print(TOUCH_SENSOR_VALUE 3:);
Serial.print(" ");

delay(500);
if(TOUCH_SENSOR_VALUE_1 < VALUE_THRESHOLD){
  for(int i = 0;i<2;i++){
    digitalWrite(Buzzer,HIGH);
    delay(100);
    digitalWrite(Buzzer,LOW);
    delay(100);
    }
  }

  if(TOUCH_SENSOR_VALUE_2 < VALUE_THRESHOLD){
  for(int i = 0;i<2;i++){
    digitalWrite(Buzzer,HIGH);
    delay(100);
    digitalWrite(Buzzer,LOW);
    delay(100);
    }
  }

  if(TOUCH_SENSOR_VALUE_3 < VALUE_THRESHOLD){
  for(int i = 0;i<2;i++){
    digitalWrite(Buzzer,HIGH);
    delay(100);
    digitalWrite(Buzzer,LOW);
    delay(100);
    }
  }
  else{
    digitalWrite(2,LOW);
    }
}
