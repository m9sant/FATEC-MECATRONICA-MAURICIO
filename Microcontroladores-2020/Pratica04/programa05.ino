const byte SERVO = 5;
const byte MOTOR_DC = 3;
const byte POTENCIOMETRO = 0;
const byte LDR = 1;
const byte CHAVE_1 = 2;
const byte CHAVE_2 = 6;
const byte CHAVE_3 = 7;
const byte CHAVES[] = {CHAVE_1, CHAVE_2, CHAVE_3};
const byte LED1 = 12;
const byte LED2 = 11;
const byte LED3 = 10;
const byte LED4 = 9;
const byte LED5 = 8;
const byte LEDS[] = {LED1, LED2, LED3, LED4, LED5};
const byte LED_LIGADO = 0;
const byte LED_DESLIGADO = 1;
const byte CHAVE_ACIONADA = 0;
const byte CHAVE_DESACIONADA = 1;

void inicializar_hardware(){
  pinMode(SERVO, OUTPUT);
  pinMode(MOTOR_DC, OUTPUT);
  for(int i = 0; i < 5; i++){
    pinMode(LEDS[i], OUTPUT);
    digitalWrite(LEDS[i], LED_DESLIGADO);
  }
  for(int i = 0; i < 3; i++)
    pinMode(CHAVES[i], INPUT_PULLUP);
  //Por usar um pullup externo
  pinMode(CHAVE_1, INPUT);
}

void setup() {
  inicializar_hardware();
}

void loop() {
  //CHAVE_1 - Liga LED1
  if(digitalRead(CHAVE_1) == CHAVE_ACIONADA)
    digitalWrite(LED1, LED_LIGADO);
  //CHAVE_2 - Desliga o LED1
  if(digitalRead(CHAVE_2) == CHAVE_ACIONADA)
    digitalWrite(LED1, LED_DESLIGADO);
  //CHAVE_3 - Liga e Desliga o LED2
  if(digitalRead(CHAVE_3) == CHAVE_ACIONADA)
    digitalWrite(LED2, LED_LIGADO);
  else
    digitalWrite(LED2, LED_DESLIGADO);
}
