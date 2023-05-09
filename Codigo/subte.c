// C++ code
//
// Juan David Chaves Rodriguez
#define A 8
#define B 9
#define C A1
#define D A2
#define E A3
#define F 7
#define G 6

#define Con 13
#define SJ 12
#define Ind 11
#define Mor 10

#define Buzzer A0

#define Slideswitch 5

unsigned int contador = 3;

void setup()
{
  Serial.begin(9600);
  
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  
  pinMode(Buzzer, OUTPUT);
  
  pinMode(Slideswitch, INPUT);
  
}

void loop()
{
  int switchReading = digitalRead(Slideswitch); 
  if (switchReading == 1){
  	printNumber(contador);
  	delay(2000);
  	turnOff();
  	contador --;
  	if(contador == -1){
  	  contador = 3;
  	  turnOffLED();
  	}
  } else if(switchReading == 0) {
  	turnOff();
    turnOffLED();
    contador = 3;
  }
}


void printNumber(int number) {
	switch(number){
    case 0:
    digitalWrite(A, HIGH);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, HIGH);
  	digitalWrite(E, HIGH);
  	digitalWrite(F, HIGH);
    digitalWrite(Mor, HIGH);
    Serial.println("Estacion Final Moreno");
    tone(Buzzer, 330);
    delay(500);
    noTone(Buzzer);
    break;
    
  	case 1:
    digitalWrite(B, HIGH);
	digitalWrite(C, HIGH);
    digitalWrite(Ind, HIGH);
    Serial.println("Estacion Independencia");
    tone(Buzzer, 220);
    delay(500);
    noTone(Buzzer);
    break;
    
    case 2:
    digitalWrite(A, HIGH);
  	digitalWrite(B, HIGH);
    digitalWrite(D, HIGH);
  	digitalWrite(E, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(SJ, HIGH);
    Serial.println("Estacion San Juan");
    tone(Buzzer, 220);
    delay(500);
    noTone(Buzzer);
    break;
    
    case 3:
    digitalWrite(A, HIGH);
  	digitalWrite(B, HIGH);
  	digitalWrite(C, HIGH);
  	digitalWrite(D, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(Con, HIGH);
    Serial.println("Estacion Constitucion");
    tone(Buzzer, 220);
    delay(500);
    noTone(Buzzer);
    break;
    }
}

void turnOff() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void turnOffLED() {
  digitalWrite(Con, LOW);
  digitalWrite(SJ, LOW);
  digitalWrite(Ind, LOW);
  digitalWrite(Mor, LOW);
}