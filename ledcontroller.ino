int blue = D7; 
int green = D5;
int red = D6;

void setup() {


    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(red, OUTPUT);
    
    Particle.function("colour", toggleLed);
}

int toggleLed(String command)
{
    if (command == "blue"){
        if (digitalRead(blue) == HIGH)
            digitalWrite(blue, LOW);
        else 
            digitalWrite(blue, HIGH);
        return 1;
    }
    else if (command == "green"){
        if (digitalRead(green) == HIGH)
            digitalWrite(green, LOW);
        else 
            digitalWrite(green, HIGH);
        return 1;
    }
    else if (command == "red"){
        if (digitalRead(red) == HIGH)
            digitalWrite(red, LOW);
        else 
            digitalWrite(red, HIGH);
        return 1;
    }
}


void loop() {

}

    
   
