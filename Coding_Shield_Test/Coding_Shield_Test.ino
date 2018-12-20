#define LED1 (13)
#define LED2 (12)
#define LED3 (11)
#define LED4 (10)
#define LED5 (9)
#define LED6 (8)
#define BUZZER (3)
#define BUTTON (7)
#define LDR (A4)
#define POT (A5)

void setup() {
  Serial.begin(115200);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(BUZZER,OUTPUT);
}

void loop() {
  for(int i=0;i<7;i++){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
    switch(i){
      case 0:digitalWrite(LED1,HIGH);break;
      case 1:digitalWrite(LED2,HIGH);break;
      case 2:digitalWrite(LED3,HIGH);break;
      case 3:digitalWrite(LED4,HIGH);break;
      case 4:digitalWrite(LED5,HIGH);break;
      case 5:digitalWrite(LED6,HIGH);break;
      case 6:tone(BUZZER,500,100);break;      
    }
    Serial.print("TEST:");
    Serial.print(i);    
    Serial.print(" LDR:");
    Serial.print(analogRead(LDR));
    Serial.print(" POT:");
    Serial.print(analogRead(POT));
    Serial.print(" BUTTON:");
    Serial.println(digitalRead(BUTTON));
    delay(500);
  }
}
