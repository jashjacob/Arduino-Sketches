  //Program variables definition
  int value = 0;
  
  //INPUT Integer Definition
    int x1di=13;  //PIN 13
    int x10di=12; //PIN 12
    int xdi=11;   //PIN 11
    int ydi=10;   //PIN 10
    int zdi=9;    //PIN 9
    

   //OUTPUT Integer Definition
   int x1do=7;    //PIN7
   int x10do=6;   //PIN6
   int x100do=5;  //PIN5
   int xdo=4;     //PIN4
   int ydo=3;     //PIN3
   int zdo=2;     //PIN2
 

void setup() {
  
      Serial.begin(9600);
      //DIGITAL INPUTS
      pinMode(x1di,INPUT);  //PIN13
      pinMode(x10di,INPUT);
      pinMode(xdi,INPUT);
      pinMode(ydi,INPUT);
      pinMode(zdi,INPUT);
    
      //DIGITAL OUTPUTS
      pinMode(x1do,OUTPUT); //PIN7
      pinMode(x10do,OUTPUT);
      pinMode(x100do,OUTPUT);
      pinMode(xdo,OUTPUT);
      pinMode(ydo,OUTPUT);
      pinMode(zdo,OUTPUT);
       
 }

void loop() {

      if(digitalRead(x1di)==0){
        digitalWrite(x1do,LOW);
        Serial.print("x1 Digital Output OFF");
        Serial.print("\n");
        delay(500);
      }
       if(digitalRead(x1di)==1){
        digitalWrite(x1do,HIGH);
        Serial.print("x1 Digital Output ON");
        Serial.print("\n");
        delay(2000);
      }
    
    

   

   
  
}
