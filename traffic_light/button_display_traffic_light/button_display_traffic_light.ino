int red = 12;
int yellow = 3;
int green = 2;
int button = 13;
int a=7;
int b=6;
int c=5;
int d=11;
int e=10;
int f=8;
int g=9;
int dp=4;

void setup() {
    Serial.begin(9600);
    int i;
    for (i=2; i<=12; i++) {
        
        pinMode(i, OUTPUT);
    
    }

    pinMode(button, INPUT);

    lightsUpGreen();
}

void loop() {
    if (digitalRead(button) == HIGH) {
        clearDisplay();
        Serial.println("Button pressed...");
        trafficLight();
    }
}

void trafficLight(){
    Serial.println("Traffic light closin...");
    loading();
    lightsUpYellow();
    loading();
    clearDisplay();        

    lightsUpRed();
    Serial.println("Traffic light closed...");

    Serial.println("Starting 10 seconds counting...");
    counterDesc();

    lightsUpGreen();
    Serial.println("Traffic light open...");    
}

void lightsUpGreen(void){
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
}

void lightsUpYellow(void){
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
}

void lightsUpRed(void){
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
}


void clearDisplay(void){
    int sections[] = {a, b, c, d, e, f, g};

    for (int section : sections) {
        digitalWrite(section, LOW);
    }
}

void display1(void){
    int sections[] = {b, c};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display2(void){
    int sections[] = {a, b, d, e, g};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display3(void){
    int sections[] = {a, b, c, d, g};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display4(void){
     int sections[] = {b, c, f, g};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display5(void){
    int sections[] = {a, c, d, f, g};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display6(void){
    int sections[] = {a, c, d, e, f, g};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display7(void){
    int sections[] = {a, b, c};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display8(void){
    int sections[] = {a, b, c, d, e, f, g};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display9(void){
    int sections[] = {a, b, c, f, g};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void display0(void){
    int sections[] = {a, b, c, d, e, f};

    for (int section : sections) {
        digitalWrite(section, HIGH);
    }
}

void counterDesc(void){
    const int numFunctions = 10;

    void (*displayFunctions[numFunctions])() = {display0, display1, display2, display3, display4, display5, display6, display7, display8, display9};

    for (int i = numFunctions - 1; i >= 0; --i) {
        displayFunctions[i]();
        delay(1000);
        clearDisplay();

    }
}

void loading(void){
    digitalWrite(a, HIGH);
    delay(500);
    digitalWrite(f, LOW);
    digitalWrite(b, HIGH);
    delay(500);
    digitalWrite(a, LOW);
    digitalWrite(c, HIGH);
    delay(500);
    digitalWrite(b, LOW);
    digitalWrite(d, HIGH);
    delay(500);
    digitalWrite(c, LOW);
    digitalWrite(e, HIGH);
    delay(500);
    digitalWrite(d, LOW);
    digitalWrite(f, HIGH);
    delay(500);
    digitalWrite(e, LOW);
    
}