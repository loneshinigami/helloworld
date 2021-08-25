#include <Servo.h>
Servo servomotor;
   void setup() {
        // put your setup code here, to run once:
        pinMode(1,OUTPUT); //RED
        pinMode(2,OUTPUT); //YELLOW
        pinMode(3,OUTPUT); //GREEN
        pinMode(4,INPUT); //irSENSOR
        servomotor.attach(5);
  }
  
   void servo_motor1(){

        servomotor.write(180);
}

 void servo_motor2(){

        servomotor.write(-180);
}
   void loop() {
        // put your main code here, to run repeatedly:
        if(digitalRead(4)==LOW)
          {
            digitalWrite(3,LOW);
            digitalWrite(2,HIGH); //YELLOW LED TURN ON
            servo_motor1();       // BARRIERS WILL GOES DOWN
            delay(3000);
            digitalWrite(2,LOW);  //YELLOW LED TURN OFF
            digitalWrite(1,HIGH); //RED TURN ON
            delay(10000);
            servo_motor2();
            digitalWrite(1,LOW);
            digitalWrite(3,ZHIGH);
          }
}
