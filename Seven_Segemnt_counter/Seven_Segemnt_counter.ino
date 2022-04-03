
int pinA = D0;
int pinB = D1;
int pinC = D2;
int pinD = D3;
int pinE = D4;
int pinF = D5;
int pinG = D6;


void setup() {                
// initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
   

}

void loop() {
//0
  digitalWrite(pinA, !HIGH);   
  digitalWrite(pinB, !HIGH);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !HIGH);   
  digitalWrite(pinE, !HIGH);   
  digitalWrite(pinF, !HIGH);   
  digitalWrite(pinG, !LOW);   
 
  delay(800);               // wait for a second

//1
  digitalWrite(pinA, !LOW);   
  digitalWrite(pinB, !HIGH);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !LOW);   
  digitalWrite(pinE, !LOW);   
  digitalWrite(pinF, !LOW);   
  digitalWrite(pinG, !LOW);   
  
  delay(800);               // wait for a second



//2
  digitalWrite(pinA, !HIGH);   
  digitalWrite(pinB, !HIGH);   
  digitalWrite(pinC, !LOW);   
  digitalWrite(pinD, !HIGH);   
  digitalWrite(pinE, !HIGH);   
  digitalWrite(pinF, !LOW);   
  digitalWrite(pinG, !HIGH);   
  
  delay(800);               // wait for a second

  
//3
  digitalWrite(pinA, !HIGH);   
  digitalWrite(pinB, !HIGH);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !HIGH);   
  digitalWrite(pinE, !LOW);   
  digitalWrite(pinF, !LOW);   
  digitalWrite(pinG, !HIGH);   
   
  delay(800);               // wait for a second


//4
  digitalWrite(pinA, !LOW);   
  digitalWrite(pinB, !HIGH);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !LOW);   
  digitalWrite(pinE, !LOW);   
  digitalWrite(pinF, !HIGH);   
  digitalWrite(pinG, !HIGH);   
    
  delay(800);               // wait for a second
  


//5
  digitalWrite(pinA, !HIGH);   
  digitalWrite(pinB, !LOW);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !HIGH);   
  digitalWrite(pinE, !LOW);   
  digitalWrite(pinF, !HIGH);   
  digitalWrite(pinG, !HIGH);   
    
  delay(800);               // wait for a second
    

//6
  digitalWrite(pinA, !HIGH);   
  digitalWrite(pinB, !LOW);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !HIGH);   
  digitalWrite(pinE, !HIGH);   
  digitalWrite(pinF, !HIGH);   
  digitalWrite(pinG, !HIGH);   
   
  delay(800);               // wait for a second
  

  
//7
  digitalWrite(pinA, !HIGH);   
  digitalWrite(pinB, !HIGH);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !LOW);   
  digitalWrite(pinE, !LOW);   
  digitalWrite(pinF, !LOW);   
  digitalWrite(pinG, !LOW);   
   
  delay(800);               // wait for a second

    
//8
  digitalWrite(pinA, !HIGH);   
  digitalWrite(pinB, !HIGH);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !HIGH);   
  digitalWrite(pinE, !HIGH);   
  digitalWrite(pinF, !HIGH);   
  digitalWrite(pinG, !HIGH);   
    
  delay(800);               // wait for a second
  

  
//9
  digitalWrite(pinA, !HIGH);   
  digitalWrite(pinB, !HIGH);   
  digitalWrite(pinC, !HIGH);   
  digitalWrite(pinD, !HIGH);   
  digitalWrite(pinE, !LOW);   
  digitalWrite(pinF, !HIGH);   
  digitalWrite(pinG, !HIGH);   
   
  delay(800);               // wait for a second
  

}
