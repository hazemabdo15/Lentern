#define MOTOR1 8
#define MOTOR2 9
#define EN 10
#define rockerswitch 2
#define led 4
int POT_VAL;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(EN,OUTPUT);
  pinMode(MOTOR1,OUTPUT);
  pinMode(MOTOR2,OUTPUT);
  pinMode(rockerswitch,INPUT_PULLUP);
 
}
 
void loop() {
      byte switchstate = digitalRead(rockerswitch);
      if(switchstate == HIGH){
        analogWrite(led,255);
        Serial.println("switch opened");
        analogWrite(EN,75);
        digitalWrite(MOTOR1,HIGH);
        digitalWrite(MOTOR2,LOW);
      }else{
        Serial.println("switch CLosed");
        analogWrite(EN,0);
        analogWrite(led,0);
      }
   
 
 
 
}
