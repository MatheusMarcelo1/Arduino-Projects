int soundPin = 2;                  // Speaker
int greenPins[] = {8, 7, 6, 5, 4}; // LEDs verdes da largada
int redPins[]   = {9, 10, 11, 12, 13}; // LEDs vermelhos da contagem regressiva

void setup() {
  // Configura LEDs verdes como saída
  for (int i = 0; i < 5; i++) {
    pinMode(greenPins[i], OUTPUT);
  }
  
  // Configura LEDs vermelhos como saída
  for (int i = 0; i < 5; i++) {
    pinMode(redPins[i], OUTPUT);
  }
  
  // Configura speaker como saída
  pinMode(soundPin, OUTPUT);
}

void loop() {
  // === Contagem regressiva: acende LEDs vermelhos um por um ===
  for (int i = 0; i < 5; i++) {
    digitalWrite(redPins[i], HIGH);       // Acende LED vermelho
    tone(soundPin, 440, 100);             // Bip curto
    delay(1000);                           // Espera 1 segundo
  }

  // === Apaga LEDs vermelhos um por um com bip mais longo ===
  for (int i = 0; i < 5; i++) {
    digitalWrite(redPins[i], LOW);        // Apaga LED
    tone(soundPin, 494, 300);             // Bip mais longo
    delay(500);                            // Espera para ouvir o som
  }

  // === Largada: acende todos os LEDs verdes ===
  for (int i = 0; i < 5; i++) {
    digitalWrite(greenPins[i], HIGH);
  }
  tone(soundPin, 1000, 1000);             // Bip longo da largada
  delay(3000);                             // Mantém LEDs acesos 3 segundos

  // Apaga todos os LEDs verdes
  for (int i = 0; i < 5; i++) {
    digitalWrite(greenPins[i], LOW);
  }

  delay(2000); // Pausa antes da próxima sequência
}