//Md.Nahidul Islam 
//05-Apr-2022 

const int led = 5; 
const int pot = A0;  
int temp1 , temp2;  
void setup() {
  Serial.begin(9600); 
 pinMode(led , OUTPUT); 
}

void loop() {
 temp1 = analogRead(pot);
 temp2 = (255.0/1023.0)*temp1;
  //temp2= map(temp1, 0, 1023, 0, 255);
  analogWrite(led, temp2);
  delay(1); 
 Serial.println(temp1); 
 Serial.println(temp2); 
}
