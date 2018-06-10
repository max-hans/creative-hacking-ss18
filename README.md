# Creative Hacking SS 18

Dokumente zum Seminar Creative Hacking an der ABK Stuttgart, Sommersemester 2018.

*Diese Sammlung wird über den Kurs hinweg erweitert.*

---

## Codeschnipsel

Ihr findet zusätzlich noch zwei Beispiele, mit denen ihr erstmal rumexperimentieren könnt (simpleDCtime.ino, simpleDCentstop.ino).

### Wichtige Befehle

#### Pins initialisieren
```
pinMode(PIN,MODUS)

pinMode(13,OUTPUT);
pinMode(2,INPUT);
```
#### Pins beschreiben
```
digitalWrite(PIN,WERT)
digitalWrite(13,HIGH);
digitalWrite(13,LOW);
```
#### Pins beschrieben (fast analog bzw. PWM)
```
analogWrite(PIN,WERT)
analogWrite(13,200);
```
(Achtung - das geht nur bei Pins, die mit einem Wellensymbol gekennzeichnet sind! Beim Uno sollten das 3, 5, 6, 9, 10, 11 sein).

Hier mehr zu dem Thema -> [Link](https://www.arduino.cc/en/Tutorial/PWM)
#### Pins einlesen (digital)
```
digitalRead(PIN)
boolean a = digitalRead(2);
```
#### Pins einlesen (analog)
```
analogRead(PIN)
int a = analogRead(A2);
```
#### H-Brücke (Gleichstrommotor) ansteuern
Die H-Brücke hat für jeden Motor drei Pins - einen für die allgemeine Geschwindigkeitsregelung (meist die Äußeren) und zwei für die Richtung.
Die Geschwindigkeit wird über analogWrite() gesteuert, die Richtung (bzw. Stop) über das hochschalten verschiedener Pins:

x | PIN 1 | PIN 2
--- | --- | ---
vorwärts | HIGH | LOW
rückwärts | LOW | HIGH
stop | LOW | LOW

---

## Linksammlung

Hier werde ich über Zeit hinweg interessante Links sammeln

Arduino if...else -> [Link](https://www.arduino.cc/reference/en/language/structure/control-structure/if/)

L298N (H-Brücke anschließen) -> [Link](https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/)

Schalter anschließen -> [Link](https://www.arduino.cc/en/Tutorial/Button)
