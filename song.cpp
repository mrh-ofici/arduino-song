
//made by ~ Henrique
const int C2 = 65;
const int Db2 = 69;
const int D2 = 73;
const int Eb2 = 78;
const int E2 = 82;
const int F2 = 87;
const int Gb2 = 93;
const int G2 = 98;
const int Ab2 = 104;
const int AA2 = 110;
const int Bb2 = 117;
const int B2 = 123;
const int C3 = 131;
const int Db3 = 139;
const int D3 = 147;
const int Eb3 = 156;
const int E3 = 165;
const int F3 = 175;
const int Gb3 = 185;
const int G3 = 196;
const int Ab3 = 208;
const int AA3 = 220;
const int Bb3 = 233;
const int B3 = 247;
const int C4 = 262;
const int Db4 = 277;
const int D4 = 294;
const int Eb4 = 311;
const int E4 = 330;
const int F4 = 349;
const int Gb4 = 370;
const int G4 = 392;
const int Ab4 = 415;
const int AA4 = 440;
const int Bb4 = 466;
const int B4 = 494;
const int C5 = 523;
const int Db5 = 554;
const int D5 = 587;
const int Eb5 = 622;
const int E5 = 659;
const int F5 = 698;
const int Gb5 = 740;
const int G5 = 784;
const int Ab5 = 831;
const int AA5 = 880;
const int Bb5 = 932;
const int B5 = 988;
const int C6 = 1047;
const int Db6 = 1109;
const int D6 = 1175;
const int Eb6 = 1245;
const int E6 = 1319;
const int F6 = 1397;
const int Gb6 = 1480;
const int G6 = 1568;
const int Ab6 = 1661;
const int AA6 = 1760;
const int Bb6 = 1865;
const int B6 = 1976;

 
const int buzzerPin = 8;
const int ledPin1 = 12;
const int ledPin2 = 13;
 
int counter = 0;
void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
 
 
  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    delay(duration);
    digitalWrite(ledPin1, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    delay(duration);
    digitalWrite(ledPin2, LOW);
  }
 
  //Stop tone on buzzerPin
  noTone(buzzerPin);
 
  delay(50);
 
  //Increment counter
  counter++;
}
 
void firstSection()
{
  beep(AA3, 200);
  beep(AA3, 200);
  beep(C4, 200);
  beep(AA3, 200);
  beep(D4, 200);
  beep(AA3, 200);
  beep(E4, 200);
  beep(D4, 200);
  beep(C4, 200);
  beep(C4, 200);
  beep(E4, 200);
  beep(C4, 200);
  beep(G4, 200);
  beep(C4, 200);
  beep(E4, 200);
  beep(C4, 200);
  beep(G3, 200);
  beep(G3, 200);
  beep(B3, 200);
  beep(G3, 200);
  beep(C4, 200);
  beep(G3, 200);
  beep(D4, 200);
  beep(C4, 200);
  beep(F3, 200);
  beep(F3, 200);
  beep(AA3, 200);
  beep(F3, 200);
  beep(C4, 200);
  beep(F3, 200);
  beep(C4, 200);
  beep(B3, 200);
  
}
void secondSection()
{
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(C4, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(E3, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(C4, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 200);
  beep(AA3, 75);
  beep(AA3, 325);
  beep(AA3, 450);
}

void thirdSection()
{
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(G3, 75);
  beep(G3, 200);
  beep(G3, 75);
  beep(AA3, 200);
  beep(AA3, 450);
}

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0
int tempo = 114;
int buzzer = 6;
int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int buttons = 0;
int button_state_1 = 0;
int button_state_2 = 0;
int button_state_3 = 0;
int button_state_4 = 0;
int melodia[] = {660,660,660,510,660,770,380,510,380,320,440,480,450,430,380,660,760,860,700,760,660,520,580,480,510,380,320,440,480,450,430,380,660,760,860,700,760,660,520,580,480,500,760,720,680,620,650,380,430,500,430,500,570,500,760,720,680,620,650,1020,1020,1020,380,500,760,720,680,620,650,380,430,500,430,500,570,585,550,500,380,500,500,500,500,760,720,680,620,650,380,430,500,430,500,570,500,760,720,680,620,650,1020,1020,1020,380,500,760,720,680,620,650,380,430,500,430,500,570,585,550,500,380,500,500,500,500,500,500,500,580,660,500,430,380,500,500,500,500,580,660,870,760,500,500,500,500,580,660,500,430,380,660,660,660,510,660,770,380};
int duracaodasnotas[] = {100,100,100,100,100,100,100,100,100,100,100,80,100,100,100,80,50,100,80,50,80,80,80,80,100,100,100,100,80,100,100,100,80,50,100,80,50,80,80,80,80,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,150,200,80,80,80,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,150,200,80,80,80,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,100,100,100,60,80,60,80,80,80,80,80,80,60,80,60,80,80,80,80,80,60,80,60,80,80,80,80,80,80,100,100,100,100,100,100,100};

int melody[] = {
  NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,4, //1
  NOTE_E5,-4, NOTE_FS5,-4, NOTE_A5,16, NOTE_G5,16, NOTE_FS5,8,
  NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,2,
  NOTE_A4,16, NOTE_A4,16, NOTE_B4,16, NOTE_D5,8, NOTE_D5,16,
  NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,4, //repeat from 1
  NOTE_E5,-4, NOTE_FS5,-4, NOTE_A5,16, NOTE_G5,16, NOTE_FS5,8,
  NOTE_D5,-4, NOTE_E5,-4, NOTE_A4,2,
  NOTE_A4,16, NOTE_A4,16, NOTE_B4,16, NOTE_D5,8, NOTE_D5,16,
  REST,4, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_D5,8, NOTE_E5,8, NOTE_CS5,-8,
  NOTE_B4,16, NOTE_A4,2, REST,4, 

  REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,4, NOTE_A4,8, //7
  NOTE_A5,8, REST,8, NOTE_A5,8, NOTE_E5,-4, REST,4, 
  NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_D5,8, NOTE_E5,8, REST,8,
  REST,8, NOTE_CS5,8, NOTE_B4,8, NOTE_A4,-4, REST,4,
  REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_A4,4,
  NOTE_E5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,4, REST,4,
   
  NOTE_D5,2, NOTE_E5,8, NOTE_FS5,8, NOTE_D5,8, //13
  NOTE_E5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,4, NOTE_A4,4,
  REST,2, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8,
  REST,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,

  NOTE_E5,-8, NOTE_E5,-8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,-8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16, //18
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,8, NOTE_A4,8, NOTE_A4,8, 
  NOTE_E5,4, NOTE_D5,2, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_A5,4, NOTE_CS5,8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,

  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8,  //23
  NOTE_E5,4, NOTE_D5,2, REST,4,
  REST,8, NOTE_B4,8, NOTE_D5,8, NOTE_B4,8, NOTE_D5,8, NOTE_E5,4, REST,8,
  REST,8, NOTE_CS5,8, NOTE_B4,8, NOTE_A4,-4, REST,4,
  REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_A4,4,
  REST,8, NOTE_A5,8, NOTE_A5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,8, NOTE_D5,8,
  
  REST,8, NOTE_A4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, //29
  REST,8, NOTE_CS5,8, NOTE_B4,8, NOTE_A4,-4, REST,4,
  NOTE_B4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, NOTE_A4,4, REST,8,
  REST,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,4, NOTE_E5,-4, 
  NOTE_D5,2, NOTE_D5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,4, 
  NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,8, NOTE_A4,8, NOTE_A4,4,

  REST,-4, NOTE_A4,8, NOTE_B4,8, NOTE_CS5,8, NOTE_D5,8, NOTE_B4,8, //35
  REST,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_E5,-8, NOTE_E5,-8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8, 

   NOTE_E5,4, NOTE_D5,2, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16, //40
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_A5,4, NOTE_CS5,8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8,  
  NOTE_E5,4, NOTE_D5,2, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
   
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16, //45
  NOTE_A5,4, NOTE_CS5,8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8,  
  NOTE_E5,4, NOTE_D5,2, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_FS5,-8, NOTE_FS5,-8, NOTE_E5,-4, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16, //45
  
  NOTE_A5,4, NOTE_CS5,8, NOTE_D5,-8, NOTE_CS5,16, NOTE_B4,8, NOTE_A4,16, NOTE_B4,16, NOTE_D5,16, NOTE_B4,16,
  NOTE_D5,4, NOTE_E5,8, NOTE_CS5,-8, NOTE_B4,16, NOTE_A4,4, NOTE_A4,8, 

  NOTE_E5,4, NOTE_D5,2, REST,4
};


int notes = sizeof(melody) / sizeof(melody[0]) / 2;


int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;
int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440 , 493, 523};



void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop()
{
  button_state_1 = digitalRead(button1);
  button_state_2 = digitalRead(button2);
  button_state_3 = digitalRead(button3);
  button_state_4 = digitalRead(button4);
  if (button_state_1) {
  	buttons = 1;
  }
  else if (button_state_2) {
  	buttons = 2;
  }
  else if (button_state_3) {
  	buttons = 3;
  }
  else if (button_state_4) {
  	buttons = 4;
  }
  if (button_state_1 && button_state_2 && button_state_3 && button_state_4 ){
  	buttons = 0;
  }
  switch (buttons) {
  case 1:
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
      divider = melody[thisNote + 1];
      if (divider > 0) {
        noteDuration = (wholenote) / divider;
      } else if (divider < 0) {
        noteDuration = (wholenote) / abs(divider);
        noteDuration *= 1.5; 
      }
      tone(buzzer, melody[thisNote], noteDuration * 0.9);
      delay(noteDuration);
      noTone(buzzer);
    }
    buttons = 0; 
    noTone(buzzer); 
    break;

  case 2:
    tone(6, 277, 200); delay(200);
    tone(6, 349, 200); delay(200);
    tone(6, 370, 200); delay(400);
    tone(6, 277, 200); delay(200);
    tone(6, 349, 200); delay(200);
    tone(6, 370, 200); delay(400);
    tone(6, 277, 200); delay(200);
    tone(6, 349, 200); delay(200);
    tone(6, 370, 200); delay(200);
    tone(6, 523, 200); delay(200);
    tone(6, 440, 200); delay(400);
    tone(6, 370, 200); delay(200);
    tone(6, 330, 200); delay(200);
    tone(6, 370, 200); delay(200);
    tone(6, 311, 200); delay(200);
    tone(6, 261, 200); delay(600);
    tone(6, 440, 200); delay(200);
    tone(6, 261, 200); delay(200);
    tone(6, 311, 200); delay(200);
    tone(6, 261, 200); delay(800); 
    
    buttons = 0; 
    noTone(buzzer);
    break;
  case 3:
    for (int nota = 0; nota < 156; nota++) {

              int duracaodanota = duracaodasnotas[nota];
              tone(buzzer, melodia[nota],duracaodanota);
 
              int pausadepoisdasnotas[] ={150,300,300,100,300,550,575,450,400,500,300,330,150,300,200,200,150,300,150,350,300,150,150,500,450,400,500,300,330,150,300,200,200,150,300,150,350,300,150,150,500,300,100,150,150,300,300,150,150,300,150,100,220,300,100,150,150,300,300,300,150,300,300,300,100,150,150,300,300,150,150,300,150,100,420,450,420,360,300,300,150,300,300,100,150,150,300,300,150,150,300,150,100,220,300,100,150,150,300,300,300,150,300,300,300,100,150,150,300,300,150,150,300,150,100,420,450,420,360,300,300,150,300,150,300,350,150,350,150,300,150,600,150,300,350,150,150,550,325,600,150,300,350,150,350,150,300,150,600,150,300,300,100,300,550,575};
              delay(pausadepoisdasnotas[nota]);
    }
	buttons = 0;
    noTone(buzzer);
    break;
    
  case 4:
    firstSection();
    firstSection();
    secondSection();
    thirdSection();
    thirdSection();
    break;
  }
}
