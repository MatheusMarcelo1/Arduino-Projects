int startstate = 0;
int stopstate = 0;
int bocinapin = 13;

int swstart = 12;
int swstop = 8;

int x = 0;

void setup() {
  pinMode(bocinapin, OUTPUT);
  pinMode(swstart, INPUT);
  pinMode(swstop, INPUT);
}

void loop() {

  startstate = digitalRead(swstart);

  if (startstate == HIGH) {

    while (x == 0) {

      Master_of_Puppets();

      stopstate = digitalRead(swstop);

      if (stopstate == HIGH) {
        noTone(bocinapin);
        x = 1;
      }
    }
  }

  x = 0;
}

void Master_of_Puppets(){

  // intro
  tone(bocinapin,349.228,283);
  delay(1132);
  
  tone(bocinapin,329.628,141);
  delay(283);
  tone(bocinapin,277.183,141);
  delay(283);
  tone(bocinapin,261.626,3396);
  delay(1698);

  // riff
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,659.255,141);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,622.254,141);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);

  tone(bocinapin,587.33,283);
  delay(283); 
  tone(bocinapin,554.251,283);
  delay(283);
  tone(bocinapin,523.251,566);
  delay(566); 

  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,493.883,141);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,466.883,141);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);

  tone(bocinapin,440,70);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,415.3053,141);
  delay(141);
  tone(bocinapin,329.628,70);
  delay(141);
  tone(bocinapin,391.995,70);
  delay(141);
  tone(bocinapin,329.628,141);
  delay(141);
  tone(bocinapin,369.994,70);
  delay(141);
  tone(bocinapin,349.228,70);
  delay(141);

  tone(bocinapin,329.628,566);
  delay(2264);
}