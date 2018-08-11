unsigned long previousMillis = 0;
const long interval = 100;
int ledState = LOW; 

void setup()
{
    pinMode(2, OUTPUT);
}

void loop()
{
    unsigned long currentMillis = millis();
    if(currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;   
        if (ledState == LOW)
            ledState = HIGH;  // Note that this switches the LED *off*
        else
            ledState = LOW;   // Note that this switches the LED *on*
            digitalWrite(2, ledState);
    }
}
