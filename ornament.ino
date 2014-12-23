// speed in ms between color changes
int fadeSpeed = 10;

// We are using a common anode LED, so the lower the value, the brighter the color
void red(int v) {
    analogWrite(11, 1023-v);
}
void green(int v) {
    analogWrite(10, 1023-v);
}
void blue(int v) {
    analogWrite(9, 1023-v);
}

void setup() {
    //Serial.begin(9600);
}

void loop()  {
//    Serial.println("green to blue");
    for (int i = 0; i < 255; i++) {
        red(0);
        green(1023 - i);
        blue(i);
        delay(fadeSpeed);
    }

//    Serial.println("blue to red");
    for (int i = 0; i < 255; i++) {
        red(i);
        green(0);
        blue(1023 - i);
        delay(fadeSpeed);
    }

//    Serial.println("red to green");
    for (int i = 0; i < 255; i++) {
        red(1023 - i);
        green(i);
        blue(0);
        delay(fadeSpeed);
    }
}
