int startstate=0;
int bocinapin=13;

int sw1start=12;
int sw2start=11;
int sw3start=10;
int sw4start=9;
int sw5start=8;

int x=0;
int y=0;
int z=0;
int j=0;
int k=0;

void setup() {
  pinMode(bocinapin, OUTPUT);
  pinMode(sw1start,INPUT);
  pinMode(sw2start,INPUT);
  pinMode(sw3start,INPUT);
  pinMode(sw4start,INPUT);
  pinMode(sw5start,INPUT);
}

void loop() {
  
  startstate=digitalRead(sw1start);
  if (startstate==HIGH){
    while(x==0){
      Master_of_Puppets();
    }
  }
  x=0;
  
  startstate=digitalRead(sw2start);
  if (startstate==HIGH){
    while(y==0){
      Toxicity();
    }
  }
  y=0;
  
  startstate=digitalRead(sw3start);
  if (startstate==HIGH){
    while(z==0){
      Feel_Good_Inc();
    }
  }
  z=0;
  
  startstate=digitalRead(sw4start);
  if (startstate==HIGH){
    while(j==0){
      Smells_Like_Teen_Spirit();
    }
  }
  j=0;

  startstate=digitalRead(sw5start);
  if (startstate==HIGH){
    while(k==0){
      Feel_Good_Inc();
    }
  }
  k=0;
}

 //Musicas scripts
void Master_of_Puppets(){
      //intro
      tone(bocinapin,349.228,283);
      delay(1132);
      
      tone(bocinapin,329.628,141.5);
      delay(283);
      tone(bocinapin,277.183,141.5);
      delay(283);
      tone(bocinapin,261.626,3396);
      delay(1698);
      
    //first riff x1
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,659.255,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,622.254,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      
      tone(bocinapin,587.33,283);
      delay(283); 
      tone(bocinapin,554.251,283);
      delay(283);
      tone(bocinapin,523.251,566);
      delay(566); 
      
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,493.883,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,466.883,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      
      tone(bocinapin,440,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,415.3053,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,349.228,70.75);
      delay(141.5);
      
      //first riff x2
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,659.255,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,622.254,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      
      tone(bocinapin,587.33,283);
      delay(283); 
      tone(bocinapin,554.251,283);
      delay(283);
      tone(bocinapin,523.251,566);
      delay(566); 
      
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,493.883,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,466.883,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      
      tone(bocinapin,440,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,415.3053,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,349.228,70.75);
      delay(141.5);
      
      //first riff x3
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,659.255,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,622.254,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      
      tone(bocinapin,587.33,283);
      delay(283); 
      tone(bocinapin,554.251,283);
      delay(283);
      tone(bocinapin,523.251,566);
      delay(566); 
      
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,493.883,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,466.883,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      
      tone(bocinapin,440,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,415.3053,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,349.228,70.75);
      delay(141.5);
      
      //first riff x4
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,659.255,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,622.254,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      
      tone(bocinapin,587.33,283);
      delay(283); 
      tone(bocinapin,554.251,283);
      delay(283);
      tone(bocinapin,523.251,566);
      delay(566); 
      
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,493.883,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,466.883,141.5);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      tone(bocinapin,329.628,70.75);
      delay(141.5);
      
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      tone(bocinapin,329.628,141.5);
      delay(141.5);
      tone(bocinapin,391.995,70.75);
      delay(141.5);
      tone(bocinapin,369.994,70.75);
      delay(141.5);
      
      tone(bocinapin,329.628,566);
      delay(2264);
      
}

void Toxicity(){
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      
        
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,932.328,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,932.328,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      tone(bocinapin,587.33,258.5);
      delay(258.5);
      tone(bocinapin,880,258.5);
      delay(258.5);
      
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1108.731,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1108.731,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,1046.502,258.5);
      delay(258.5);
      tone(bocinapin,932.328,258.5);
      delay(258.5);
      tone(bocinapin,698.456,258.5);
      delay(258.5);
      tone(bocinapin,932.328,258.5);
      delay(258.5);
}
void Feel_Good_Inc(){
      tone(bocinapin,77.782,215);
      delay(645);
      
      tone(bocinapin,77.782,215);
      delay(215);
      tone(bocinapin,87.307,215);
      delay(215);
      tone(bocinapin,92.499,215);
      delay(430);
      tone(bocinapin,123.471,215);
      delay(430);
      tone(bocinapin,116.541,1505);
      delay(1505);
      
      tone(bocinapin,103.826,215);
      delay(645);
      
      tone(bocinapin,103.826,215);
      delay(215);
      tone(bocinapin,123.471,215);
      delay(215);
      tone(bocinapin,116.541,215);
      delay(430);
      tone(bocinapin,92.499,215);
      delay(430);
      tone(bocinapin,77.782,215);
      delay(1505);
      
      tone(bocinapin,77.782,215);
      delay(645);
      
      tone(bocinapin,77.782,215);
      delay(215);
      tone(bocinapin,87.307,215);
      delay(215);
      tone(bocinapin,92.499,215);
      delay(430);
      tone(bocinapin,123.471,215);
      delay(430);
      tone(bocinapin,116.541,1505);
      delay(1505);
      
      tone(bocinapin,103.826,215);
      delay(645);
      
      tone(bocinapin,103.826,215);
      delay(215);
      tone(bocinapin,123.471,215);
      delay(215);
      tone(bocinapin,116.541,215);
      delay(430);
      tone(bocinapin,92.499,215);
      delay(430);
      tone(bocinapin,77.782,215);
      delay(430);
      tone(bocinapin,103.826,107.5);
      delay(107.5);
      tone(bocinapin,164.814,107.5);
      delay(107.5);
      tone(bocinapin,220,215);
      delay(860);
      
      tone(bocinapin,77.782,215);
      delay(645);
      
      tone(bocinapin,77.782,215);
      delay(215);
      tone(bocinapin,87.307,215);
      delay(215);
      tone(bocinapin,92.499,215);
      delay(430);
      tone(bocinapin,123.471,215);
      delay(430);
      tone(bocinapin,116.541,1505);
      delay(1505);
      
      tone(bocinapin,103.826,215);
      delay(645);
      
      tone(bocinapin,103.826,215);
      delay(215);
      tone(bocinapin,123.471,215);
      delay(215);
      tone(bocinapin,116.541,215);
      delay(430);
      tone(bocinapin,92.499,215);
      delay(430);
      tone(bocinapin,77.782,215);
      delay(1505);
      
      tone(bocinapin,77.782,215);
      delay(645);
      
      tone(bocinapin,77.782,215);
      delay(215);
      tone(bocinapin,87.307,215);
      delay(215);
      tone(bocinapin,92.499,215);
      delay(430);
      tone(bocinapin,123.471,215);
      delay(430);
      tone(bocinapin,116.541,1505);
      delay(1505);
      
      tone(bocinapin,103.826,215);
      delay(645);
      
      tone(bocinapin,103.826,215);
      delay(215);
      tone(bocinapin,123.471,215);
      delay(215);
      tone(bocinapin,116.541,215);
      delay(430);
      tone(bocinapin,92.499,215);
      delay(430);
      tone(bocinapin,77.782,215);
      delay(430);
      tone(bocinapin,103.826,107.5);
      delay(107.5);
      tone(bocinapin,164.814,107.5);
      delay(107.5);
      tone(bocinapin,220,215);
      delay(860);
      
      tone(bocinapin,138.591,215);
      delay(215);
      tone(bocinapin,123.471,215);
      delay(430);
      tone(bocinapin,103.826,215);
      delay(430);
      tone(bocinapin,92.44,215);
      delay(430);
      tone(bocinapin,77.782,1505);
      delay(1505);
}

void Smells_Like_Teen_Spirit() {
    // Primeira parte da melodia
    noTone(bocinapin);
    delay(500);
  
    tone(bocinapin, 659, 250);
    delay(250);
    tone(bocinapin, 659, 250);
    delay(250);
    tone(bocinapin, 784, 250);
    delay(250);
    tone(bocinapin, 784, 250);
    delay(250);
    tone(bocinapin, 880, 250);
    delay(250);
    tone(bocinapin, 880, 250);
    delay(250);
    
    tone(bocinapin, 784, 250);
    delay(250);
    tone(bocinapin, 784, 250);
    delay(250);
    tone(bocinapin, 659, 250);
    delay(250);
    tone(bocinapin, 659, 250);
    delay(250);
    tone(bocinapin, 523, 250);
    delay(250);
    tone(bocinapin, 523, 250);
    delay(250);
    
    tone(bocinapin, 587, 250);
    delay(250);
    tone(bocinapin, 587, 250);
    delay(250);
    tone(bocinapin, 523, 250);
    delay(250);
    tone(bocinapin, 523, 250);
    delay(250);
    
    // Segunda parte da melodia
    tone(bocinapin, 659, 250);
    delay(250);
    tone(bocinapin, 659, 250);
    delay(250);
    tone(bocinapin, 784, 250);
    delay(250);
    tone(bocinapin, 784, 250);
    delay(250);
    tone(bocinapin, 880, 250);
    delay(250);
    tone(bocinapin, 880, 250);
    delay(250);
  
    tone(bocinapin, 784, 250);
    delay(250);
    tone(bocinapin, 784, 250);
    delay(250);
    tone(bocinapin, 659, 250);
    delay(250);
    tone(bocinapin, 659, 250);
    delay(250);
    tone(bocinapin, 523, 250);
    delay(250);
    tone(bocinapin, 523, 250);
    delay(250);
  
    tone(bocinapin, 587, 250);
    delay(250);
    tone(bocinapin, 587, 250);
    delay(250);
    tone(bocinapin, 523, 250);
    delay(250);
    tone(bocinapin, 523, 250);
    delay(250);
  }