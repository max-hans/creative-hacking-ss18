////////////////////////////////////////////////////////
/*
creative hacking | abk stuttgart | sommersemester 18
maximilian hans
*/
////////////////////////////////////////////////////////

// pin definitionen

#define MOTOR1PIN1
#define MOTOR1PIN2
#define MOTOR1SPEEDPIN

#define SENSOR1
#define SENSOR2

void setup(){
    pinMode(MOTOR1PIN1,OUTPUT);
    pinMode(MOTOR1PIN2,OUTPUT);
    pinMode(MOTOR1SPEEDPIN,OUTPUT);

    pinMode(SENSOR1,INPUT);
    pinMode(SENSOR2,INPUT);

    // geschwindigkeit in den motor schreiben (werte 0 - 255)
    analogWrite(MOTOR1SPEEDPIN,150);
    
    // motor in eine richtung drehen lassen
    digitalWrite(MOTOR1PIN1,HIGH);
    digitalWrite(MOTOR1PIN2,LOW);
}

void loop(){
    
    if(digitalRead(SENSOR1 == HIGH)){
        /*
        wenn der eine sensor ausgelöst wird, drehen wir den motor in die eine richtung
        */
        digitalWrite(MOTOR1PIN1,LOW);
        digitalWrite(MOTOR1PIN2,HIGH);
    }

    if(digitalRead(SENSOR2 == HIGH)){
        /*
        wenn der andere sensor ausgelöst wird, drehen wir den motor in die andere richtung
        */
        digitalWrite(MOTOR1PIN1,HIGH);
        digitalWrite(MOTOR1PIN2,LOW);
    }
}