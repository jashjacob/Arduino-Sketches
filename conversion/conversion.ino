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
      pinMode(x1di,INPUT);    //PIN 13
      pinMode(x10di,INPUT);   //PIN 12
      pinMode(xdi,INPUT);
      pinMode(ydi,INPUT);
      pinMode(zdi,INPUT);
    
      //DIGITAL OUTPUTS
      pinMode(x1do,OUTPUT);   // PIN 7
      pinMode(x10do,OUTPUT);  // PIN 6
      pinMode(x100do,OUTPUT); // PIN 5 
      pinMode(xdo,OUTPUT);
      pinMode(ydo,OUTPUT);
      pinMode(zdo,OUTPUT);
       
 }

void loop() {

      if((digitalRead(x1di)==0)&&(digitalRead(x10di)==0)){
        //Write Increment Digital Outputs to OFF when Rotary Switch is in "OFF" Position
        digitalWrite(x1do,HIGH);
        digitalWrite(x10do,HIGH);
        digitalWrite(x100do,HIGH);
        Serial.print("Increment Digital Output OFF");
        Serial.print("\n");
        delay(500);
      } else if((digitalRead(x1di)==1)&&(digitalRead(x10di)==0)){
        digitalWrite(x1do,LOW);
        digitalWrite(x10do,HIGH);
        digitalWrite(x100do,HIGH);
        Serial.print("1x Increment Selection Digital Output ON");
        Serial.print("\n");
      } else if((digitalRead(x1di)==1)&&(digitalRead(x10di)==1)){ 
        digitalWrite(x1do,LOW);
        digitalWrite(x10do,LOW);
        digitalWrite(x100do,HIGH);
        Serial.print("10x Increment Selection Digital Output ON");
        Serial.print("\n");
      }else if((digitalRead(x1di)==0)&&(digitalRead(x10di)==1)){ 
        digitalWrite(x1do,HIGH);
        digitalWrite(x10do,HIGH);
        digitalWrite(x100do,LOW);
        Serial.print("100x Increment Selection Digital Output ON");
        Serial.print("\n");
      }

  
}
