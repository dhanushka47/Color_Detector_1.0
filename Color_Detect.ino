
//TCS230 Color Sensor

#define s0 8        //Module pins wiring
#define s1 9
#define s2 10
#define s3 11
#define out 12
#define LDRpin A0
#define switchPin 4
#define Led 3

//functions
void colorName();
void converRGB();
void getColors();
void rgbValues();
void welcomemsg();


// chage this values to calibrate sensor
//Red
#define rMin 1
#define rMax 2
//green
#define gMin 3
#define gMax 4
//blue
#define bMin 5
#define bMax 6


int Red=0, Blue=0,Green=0;  
int R=0,G=0,B=0; 
int LDRread = 0;


void setup() 
{
   pinMode(s0,OUTPUT);    //pin modes
   pinMode(s1,OUTPUT);
   pinMode(s2,OUTPUT);
   pinMode(s3,OUTPUT);
   pinMode(out,INPUT);
   pinMode(switchPin,INPUT);
   Serial.begin(9600);   //intialize the serial monitor baud rate
   digitalWrite(s0,HIGH); //Putting S0/S1 on HIGH/HIGH levels means the output frequency scalling is at 100% (recommended)
   digitalWrite(s1,HIGH); //LOW/LOW is off HIGH/LOW is 20% and LOW/HIGH is  2%
   Serial.println("Color Scanner Project by github/dhanushkasct19047");
}

void loop(){

 if (digitalRead(switchPin) == HIGH) {
  welcomemsg();
  LDRread = analogRead(LDRpin);
      if( LDRread == 0){  
           getColors();                               
           rgbValues();
           colorName();      
   }else {
    Serial.println("please put module Black surface ..!");
   }                            
  }
 }
