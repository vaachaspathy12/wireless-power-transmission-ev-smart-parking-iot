#include <LiquidCrystal.h>

const int trigPin1 = 2;
const int echoPin1 = 3;

const int trigPin2 = 4;
const int echoPin2 = 5;

const int relayPin1 = 6;
const int relayPin2 = 7;

const int rs = 8;
const int en = 9;
const int d4 = 10;
const int d5 = 11;
const int d6 = 12;
const int d7 = 13;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int obstacleThreshold = 20;

void setup()
{
    Serial.begin(9600);

    pinMode(relayPin1, OUTPUT);
    pinMode(relayPin2, OUTPUT);

    lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("Charging Station");

    pinMode(trigPin1, OUTPUT);
    pinMode(echoPin1, INPUT);

    pinMode(trigPin2, OUTPUT);
    pinMode(echoPin2, INPUT);
}

void loop()
{
    lcd.clear();

    long duration1, distance1;

    digitalWrite(trigPin1, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin1, LOW);

    duration1 = pulseIn(echoPin1, HIGH);
    distance1 = duration1 * 0.034 / 2;

    long duration2, distance2;

    digitalWrite(trigPin2, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin2, HIGH);
    delayMicroseconds(10);

    digitalWrite(trigPin2, LOW);

    duration2 = pulseIn(echoPin2, HIGH);
    distance2 = duration2 * 0.034 / 2;

    if (distance1 <= obstacleThreshold)
    {
        digitalWrite(relayPin1, HIGH);

        lcd.setCursor(0, 1);
        lcd.print("Charging Station 1 ");
    }
    else
    {
        lcd.setCursor(0, 0);
        lcd.print("Charging Station");

        digitalWrite(relayPin1, LOW);
    }

    if (distance2 <= obstacleThreshold)
    {
        digitalWrite(relayPin2, HIGH);

        lcd.setCursor(0, 1);
        lcd.print("Charging Station 2 ");
    }
    else
    {
        lcd.setCursor(0, 0);
        lcd.print("Charging Station");

        digitalWrite(relayPin2, LOW);
    }

    Serial.print("Distance 1: ");
    Serial.print(distance1);

    Serial.print(" cm\tDistance 2: ");
    Serial.print(distance2);

    Serial.println(" cm");

    delay(100);
}
