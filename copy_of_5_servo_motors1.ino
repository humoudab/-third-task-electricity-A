
#include <Servo.h> 

int S1Pin = 2;
int S2Pin = 3;
int S3Pin = 4;
int S4Pin = 5;
int S5Pin = 6;
int S6Pin = 7;




Servo S1, S2, S3, S4, S5, S6; 
void setup() { 

  S1.attach(S1Pin); 
   S2.attach(S2Pin);
   S3.attach(S3Pin);
   S4.attach(S4Pin);
   S5.attach(S5Pin);
   S6.attach(S6Pin);


  
}
void  loop(){ 

  

   

   S1.write(90);
   S2.write(90);
   S3.write(90);
   S4.write(90);
   S5.write(90);
   S6.write(90);
    delay(500);
   
}
