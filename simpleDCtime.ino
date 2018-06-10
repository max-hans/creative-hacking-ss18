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

// variable zum merken der motordrehrichtung
boolean direction = true;

// variable zum speichern der zielzeit (unsigned long ist ein datentyp für sehr große zahlen)
unsigned long targetTime = 0;

// variable in der wir die frequenz speichern
int frequency = 400;

void setup(){
    pinMode(MOTOR1PIN1,OUTPUT);
    pinMode(MOTOR1PIN2,OUTPUT);
    pinMode(MOTOR1SPEEDPIN,OUTPUT);

    analogWrite(MOTOR1SPEEDPIN,150);
    
    digitalWrite(MOTOR1PIN1,HIGH);
    digitalWrite(MOTOR1PIN2,LOW);
}

void loop(){
    if(millis() > targetTime){
        
        /*
        millis() gibt die Zeit ab Start in Millisekunden an
        wenn dieser Wert größer ist als eine Zielzeit,
        die wir uns gesetzt haben wird der code ausgeführt
        */

        targetTime = targetTime + frequency;

        /*
        wir setzen uns dann zuerst einen neuen zeitpunkt in der zukunft,
        zu dem der code das nächste mal ausgeführt werden soll.
        */

        if(direction == true){
            /*
            wenn wir bis jetzt in die eine richtung gefahren sind
            ändern wir die richtung und merken uns das für das nächste mal
            */
            digitalWrite(MOTOR1PIN1,LOW);
            digitalWrite(MOTOR1PIN2,HIGH);
            direction = false;
        }

        else{

            /*
            wenn nicht fahren wir wieder vorwärts und merken uns das auch
            */

            digitalWrite(MOTOR1PIN1,HIGH);
            digitalWrite(MOTOR1PIN2,LOW);
            direction = true;
        }
    }
}