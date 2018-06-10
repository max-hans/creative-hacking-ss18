# Creative Hacking SS 18


## Code

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


```
```

## Bauteile

https://www.arduino.cc/en/uploads/Tutorial/KeyboardMessage_2_bb.png

## Linksammlung

Arduino if...else -> [Link](https://www.arduino.cc/reference/en/language/structure/control-structure/if/)

