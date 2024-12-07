#define Pin 35  

int dryValue = 3000;   
int wetValue = 800;    

void setup() {
    Serial.begin(115200);
}

void loop() {
    int moistlevel = analogRead(Pin); 
    int moistpercent = map(moistlevel, dryValue, wetValue, 0, 100);

    Serial.print("Moisture Level: ");
    Serial.print(moistlevel);
    Serial.print(" (");
    Serial.print(moistpercent);
    Serial.println("%)");

    delay(1000);
}
