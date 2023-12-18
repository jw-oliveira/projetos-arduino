int a=7;
int b=6;
int c=5;
int d=11;
int e=10;
int f=8;
int g=9;
int dp=4;

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

void dot(void){
    digitalWrite(dp, HIGH);
}

void counterLoading(void){
    const int numFunctions = 10;

    void (*displayFunctions[numFunctions])() = {display1, display2, display3, display4, display5, display6, display7, display8, display9, display0};

    for (int i = 0; i< numFunctions; i++) {
        displayFunctions[i]();
        delay(500);
        clearDisplay();
        loading();
        clearDisplay();
    }
}

void counterAsc(void){
    const int numFunctions = 10;

    void (*displayFunctions[numFunctions])() = {display1, display2, display3, display4, display5, display6, display7, display8, display9, display0};

    for (int i = 0; i < numFunctions; i++) {
        displayFunctions[i]();
        delay(500);
        clearDisplay();
    }
}

void counterDesc(void){
    const int numFunctions = 10;

    void (*displayFunctions[numFunctions])() = {display0, display1, display2, display3, display4, display5, display6, display7, display8, display9};

    for (int i = numFunctions - 1; i >= 0; --i) {
        displayFunctions[i]();
        delay(500);
        clearDisplay();

    }
}

void loading(void){
    digitalWrite(a, HIGH);
    delay(100);
    digitalWrite(f, LOW);
    digitalWrite(b, HIGH);
    delay(100);
    digitalWrite(a, LOW);
    digitalWrite(c, HIGH);
    delay(100);
    digitalWrite(b, LOW);
    digitalWrite(d, HIGH);
    delay(100);
    digitalWrite(c, LOW);
    digitalWrite(e, HIGH);
    delay(100);
    digitalWrite(d, LOW);
    digitalWrite(f, HIGH);
    delay(100);
    digitalWrite(e, LOW);
    
}

void setup(){
    int i;
    for(i=4;i<=11;i++)

        pinMode(i, OUTPUT);
}

void loop(){
    counterLoading();
    counterAsc();
    counterDesc();
}