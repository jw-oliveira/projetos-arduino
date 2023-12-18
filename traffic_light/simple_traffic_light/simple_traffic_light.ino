// nomeando as portas

int red = 12;
int yellow = 3;
int green = 2;

void setup() {
    // indicando as portas que serão usadas
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop() {
    // Inicia do amarelo
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);

    delay(2000);

    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);

    delay(5000);

    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);

    delay(5000);
}