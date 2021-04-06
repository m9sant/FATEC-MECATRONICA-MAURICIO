#define BOT_ON 0
#define BOT_OFF 1
#define LED_ON 0
#define LED_OFF 1
#define BOTAO1 5
#define BOTAO2 4
#define LED 12

void inicializa_hardware() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO1, INPUT_PULLUP);
  pinMode(BOTAO2, INPUT_PULLUP);
  digitalWrite(LED, LED_OFF);
}

void setup() {
  inicializa_hardware();
}

void loop() {
  if(digitalRead(BOTAO1) == (BOT_ON) {
    digitalWrite(LED, LED_ON);
  }
     
  if(digitalRead(BOTAO2) == (BOT_ON) {
    digitalWrite(LED, LED_ON);
     }
        }
   
