#define REST 0
#define Note_A5 900
#define Note_B5 988
#define Note_C6 1047
#define Note_D6 1175
#define Note_E6 1319
#define Note_F6 1397
#define Note_G6 1568
#define Note_GS5 831
#define Note_A6 1760
#define Note_A7 3520
#define Note_GS7 3322

int speakerpin = 11;

int Tetris_Melody[] = 
{ 
  Note_E6, Note_B5, Note_C6, Note_D6, Note_C6, Note_B5, 
  Note_A5, Note_A5, Note_C6, Note_E6, Note_D6, Note_C6, 
  Note_B5, Note_C6, Note_D6, Note_E6, 
  Note_C6, Note_A5, Note_A5, Note_A5, Note_B5, Note_C6,
  
  Note_D6, Note_F6, Note_A6, Note_G6, Note_F6,
  Note_E6, Note_C6, Note_E6, Note_D6, Note_C6, 
  Note_B5, Note_B5, Note_C6, Note_D6, Note_E6, 
  Note_C6, Note_A5, Note_A5, REST,

  Note_E6, Note_C6, 
  Note_D6, Note_B5, 
  Note_C6, Note_A5, 
  Note_GS5, Note_B5, REST,
  Note_E6, Note_C6, 
  Note_D6, Note_B5, 
  Note_C6, Note_E6, Note_A7, 
  Note_GS7, 
  
  REST, REST,
};

int Tetris_Notes[] = {
  4, 8, 8, 4, 8, 8, 
  4, 8, 8, 4, 8, 8,
  2, 8, 4, 4,
  4, 4, 8, 8, 8, 8,

  2, 8, 4, 8, 8,
  2, 8, 4, 8, 8,
  4, 8, 8, 4, 4,
  4, 4, 4, 4,

  2, 2, 
  2, 2,
  2, 2,
  2, 4, 4,
  2, 2,
  2, 2,
  4, 4, 2,
  2,
  
  2, 2,
  };

  const int num_elements_in_arr = sizeof(Tetris_Notes)/sizeof(Tetris_Notes[0]);


void setup() {
 
}

void loop() {
 for (int Note = 0; Note < num_elements_in_arr; Note++) 
 {
  int noteDuration = 1000/Tetris_Notes[Note];
  tone(speakerpin, Tetris_Melody[Note], noteDuration);

  int pauseBewteenNotes = noteDuration *1.30;
  delay(pauseBewteenNotes);
  noTone(speakerpin);
 }
}
