const int mq2Pin = 34;

void setup()
{
    Serial.begin(115200); 
}

void loop()
{
    Serial.println(analogRead(mq2Pin));
    delay(1000);        
