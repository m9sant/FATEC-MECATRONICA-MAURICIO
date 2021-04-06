#define BOT_ON 0
#define BOT_OFF 1
#define LED_ON 0
#define LED_OFF 1
#define BOTAO 5
#define LED1 12
#define LED2 13

void inicializa_hardware() {
  pinMode(LED1, OUTPUT);
  pinmode(LED2, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  digitalWrite(LED1, LED_OFF);
  digitalWrite(LED2, LED_OFF);
}

void setup() {
  inicializa_hardware();
}

void loop() {
  digitalWrite(LED2, LED_ON);
  delay(500);
  digitalWrite(LED2, LED_OFF);
  delay(500);
  if(digitalRead(BOTAO) == (BOT_ON) {
    digitalWrite(LED1, LED_ON);
  }
     
  if(digitalRead(BOTAO) == (BOT_OFF) {
    digitalWrite(LED1, LED_OFF);
     }
        }
