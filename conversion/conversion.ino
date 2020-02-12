  //Program variables definition
  int value = 0;
  
  //INPUT Integer Definition
    int x1di=13;
    int x10di=12;
    int xdi=11;
    int ydi=10;
    int zdi=9;
    int wdi=8;

   //OUTPUT Integer Definition
   int x1do=7;
   int x10do=6;
   int x100do=5;
   int xdo=4;
   int ydo=3;
   int zdo=2;
   int wdo=1;

void setup() {
      Serial.begin(9600);
      
      //DIGITAL INPUTS
      pinMode(x1di,INPUT);
      pinMode(x10di,INPUT);
      pinMode(xdi,INPUT);
      pinMode(ydi,INPUT);
      pinMode(zdi,INPUT);
      pinMode(wdi,INPUT);

      //DIGITAL OUTPUTS
      pinMode(x1do,OUTPUT);
      pinMode(x10do,OUTPUT);
      pinMode(x100do,OUTPUT);
      pinMode(xdo,OUTPUT);
      pinMode(ydo,OUTPUT);
      pinMode(zdo,OUTPUT);
      pinMode(wdo,OUTPUT);   
 }

void loop() {

    value = digitalRead(x1di);

    if(value == 0) {
          digitalWrite(x1do,HIGH);
          Serial.print(23);
    }

    if(value == 1) {
          digitalWrite(x1do,LOW);
          Serial.print(220);
    }

    
}
