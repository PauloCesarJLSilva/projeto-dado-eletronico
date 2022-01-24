#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define botao 11
int ultimoNumero = 0;
bool botaoAnterior = false;
bool botaoAtual = false;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(botao,INPUT);
  }

  void espera(int pausa){
    digitalWrite(led1,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led9,HIGH);
    delay(pausa);
    digitalWrite(led1,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led8,HIGH);
    delay(pausa);
    digitalWrite(led2,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led8,LOW);
  }

  void efeitoLed(int pausa){
    digitalWrite(led1,HIGH);
    delay(pausa);
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    delay(pausa);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    delay(pausa);
    digitalWrite(led3,LOW);
    digitalWrite(led6,HIGH);
    delay(pausa);
    digitalWrite(led6,LOW);
    digitalWrite(led5,HIGH);
    delay(pausa);
    digitalWrite(led5,LOW);
    digitalWrite(led4,HIGH);
    delay(pausa);
    digitalWrite(led4,LOW);
    digitalWrite(led7,HIGH);
    delay(pausa);
    digitalWrite(led7,LOW);
    digitalWrite(led8,HIGH);
    delay(pausa);
    digitalWrite(led8,LOW);
    digitalWrite(led9,HIGH);
    delay(pausa);
    digitalWrite(led9,LOW);
    digitalWrite(led6,HIGH);
    delay(pausa);
    digitalWrite(led6,LOW);
    digitalWrite(led5,HIGH);
    delay(pausa);
    digitalWrite(led5,LOW);
    digitalWrite(led4,HIGH);
    delay(pausa);
    digitalWrite(led4,LOW);
  }

  void numeroDado(int n){
    switch (n){
      case 1:
        digitalWrite(led5,HIGH);
        break;
      case 2:
        digitalWrite(led3,HIGH);
        digitalWrite(led7,HIGH);
        break;
      case 3:
        digitalWrite(led3,HIGH);
        digitalWrite(led5,HIGH);
        digitalWrite(led7,HIGH);
        break;
      case 4:
        digitalWrite(led1,HIGH);
        digitalWrite(led3,HIGH);
        digitalWrite(led7,HIGH);
        digitalWrite(led9,HIGH);
        break;
      case 5:
        digitalWrite(led1,HIGH);
        digitalWrite(led3,HIGH);
        digitalWrite(led5,HIGH);
        digitalWrite(led7,HIGH);
        digitalWrite(led9,HIGH);
        break;
      case 6:
        digitalWrite(led1,HIGH);
        digitalWrite(led3,HIGH);
        digitalWrite(led4,HIGH);
        digitalWrite(led6,HIGH);
        digitalWrite(led7,HIGH);
        digitalWrite(led9,HIGH);
        break;
      default:
        digitalWrite(led1,HIGH);
        digitalWrite(led3,HIGH);
        digitalWrite(led5,HIGH);
        digitalWrite(led7,HIGH);
        digitalWrite(led9,HIGH);
        delay(150);   
        digitalWrite(led1,LOW);
        digitalWrite(led3,LOW);
        digitalWrite(led5,LOW);
        digitalWrite(led7,LOW);
        digitalWrite(led9,LOW);
        digitalWrite(led2,HIGH);
        digitalWrite(led4,HIGH);
        digitalWrite(led6,HIGH);
        digitalWrite(led8,HIGH);
        delay(150);
        digitalWrite(led2,LOW);
        digitalWrite(led4,LOW);
        digitalWrite(led6,LOW);
        digitalWrite(led8,LOW);
    }
  }

void loop() {
  numeroDado(ultimoNumero);
  botaoAtual = digitalRead(botao);
  if (botaoAtual && !botaoAnterior){
  numeroDado(ultimoNumero);
  for (int i=0; i<2; i++){
    efeitoLed(100);
  }
  ultimoNumero = random(1,6);
  }
}
