//Md.Nahidul Islam 
//05-Apr-2022 

const int led = 5; 
void setup() {
 pinMode(led , OUTPUT); 
}

void loop() {
  for(int i =0; i<255; i++){
    analogWrite(led, i); 
    delay(10); 
    }

 for(int i = 255; i>0; i--){
    analogWrite(led, i); 
    delay(10); 
    } 
}
