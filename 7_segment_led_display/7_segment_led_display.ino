int a=7;
int b=6;
int c=5;
int d=11;
int e=10;
int f=8;
int g=9;
int dp=4;

void cleardisplay(void){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(dp, LOW);
}

void display1(void){
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
}

void display2(void){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(d, HIGH);
}

void display3(void){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
}

void display4(void){
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
}

void display5(void){
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
}

void display6(void){
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
}

void display7(void){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
}

void display8(void){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);

}

void display9(void){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);

}

void display0(void){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
}

void counterLoading(void){
    display1();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();

    display2();
    delay(500);
    cleardisplay();    
    loading();
    cleardisplay();

    display3();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();

    display4();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();

    display5();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();

    display6();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();

    display7();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();

    display8();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();

    display9();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();

    display0();
    delay(500);
    cleardisplay();
    loading();
    cleardisplay();
}

void counter(void){
    display1();
    delay(500);
    cleardisplay();

    display2();
    delay(500);
    cleardisplay();

    display3();
    delay(500);
    cleardisplay();

    display4();
    delay(500);
    cleardisplay();

    display5();
    delay(500);
    cleardisplay();

    display6();
    delay(500);
    cleardisplay();

    display7();
    delay(500);
    cleardisplay();

    display8();
    delay(500);
    cleardisplay();

    display9();
    delay(500);
    cleardisplay();

    display0();
    delay(500);
    cleardisplay();
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
}