#define BOT_ON 0
#define BOT_OFF 1
#define LED_ON 0
#define LED_OFF 1
#define BOTAO 5
#define LED 12

void inicializa_hardware() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  digitalWrite(LED, LED_OFF);
}

void setup() {
  inicializa_hardware();
}

void loop() {
  if(digitalRead(BOTAO) == (BOT_ON) {
    digitalWrite(LED, LED_ON);
  }
     
  if(digitalRead(BOTAO) == (BOT_OFF) {
    digitalWrite(LED, LED_OFF);
     }
        }
