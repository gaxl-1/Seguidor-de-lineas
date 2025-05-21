#define ENA 10
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6
#define ENB 5

#define R_S A0
#define L_S A1

void setup(){
  pinMode(R_S, INPUT);
  pinMode(L_S, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  
  analogWrite(ENA, 165);
  analogWrite(ENB, 165);
  delay(1000);
}

void loop(){
  if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 0)) {forword();}
  if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 0)) {turnRight();}
  if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 1)) {turnLeft();}
  if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 1)) {Stop();}
}

void forword(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnRight(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void Stop(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
