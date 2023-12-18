// "nomeando" as portas 
int red = 12;
int yellow = 3;
int green = 2;
int button = 13;


void setup() {
  Serial.begin(9600); // Inicia a serial
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);

  digitalWrite(green, HIGH); // inicia com o verde aceso e os demais apagados
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);  
}

void loop() {
  if (digitalRead(button) == HIGH) { // se o botão for pressionado, irá chamar a função semaforo
    Serial.println("Botão Pressionado"); // quando o botão for pressionado, imprime na serial essa mensagem
    delay(2000); // aguarda 2 segundos antes de iniciar o fechamento do semáforo
    semaforo();
  }

}

void semaforo(){
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH); // acende o amarelo e apaga os demais
  digitalWrite(green, LOW);
  Serial.println("Sinal fechando...");

  delay(2000); // aguarda 2 segundos antes de acender o vermelho

  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  Serial.println("Sinal fechado...");

  delay(5000);
  Serial.println("Sinal abrindo..."); // envia a mensagem e aguarda 2 segundos antes de abrir o sinal

  delay(2000); 

  digitalWrite(red, LOW);
  digitalWrite(green, HIGH); // sinal aberto, led verde aceso e os demais apagados
  Serial.println("Sinal aberto...");

  delay(5000);

}