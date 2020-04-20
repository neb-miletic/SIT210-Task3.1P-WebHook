
int lightValue;
int photoresistor = A5;

void setup() {
    
    pinMode(photoresistor,INPUT);
    Serial.begin(9600);

}

void loop() {
    
    
    lightValue = analogRead(photoresistor);
    Serial.println(lightValue);
    Particle.publish("Light_Sensor",String(lightValue),30,PRIVATE);
    delay(30000);
    
}
