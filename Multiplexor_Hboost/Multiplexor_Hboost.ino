#define EN 3
#define S0 4
#define S1 5
#define S2 6
#define S3 7 
#define SIG A0

//Флаг режима ускоренной работы
#define FASTADC 1

//Установка и очистка битов регистров
#ifndef cbi
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif


void setup(){

    //Проверка установки флага режима
  
    #if FASTADC
  
    //Установка предделителя :16
    sbi(ADCSRA,ADPS2) ;
    cbi(ADCSRA,ADPS1) ;
    cbi(ADCSRA,ADPS0) ;
    #endif

Serial.begin(9600) ;

  //Настройка входов и выходов
  
  pinMode(S0, OUTPUT); 
  pinMode(S1, OUTPUT); 
  pinMode(S2, OUTPUT); 
  pinMode(S3, OUTPUT);   

  digitalWrite(S0, LOW);
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  pinMode(EN, OUTPUT); 
  digitalWrite(EN, LOW);
}


void loop(){

  //Читать в цикле 10 входов
  for(int i = 0; i < 9; i ++){
    Serial.print("Value at channel ");
    Serial.print(i);
    Serial.print(": ");
    Serial.print(readMux(i));
    Serial.print(". ");
    
  }
  Serial.println();
  delay(10);    //задержку можно попробовать отключить
}


//Функция чтения определенного канала

int readMux(int channel){
  int controlPin[] = {S0, S1, S2, S3};

  int muxChannel[9][4]={
    {0,0,0,0}, //канал 0
    {1,0,0,0}, //канал 1
    {0,1,0,0}, //канал 2
    {1,1,0,0}, //канал 3
    {0,0,1,0}, //канал 4
    {1,0,1,0}, //канал 5
    {0,1,1,0}, //канал 6
    {1,1,1,0}, //канал 7
    {0,0,0,1}  //канал 8
//Следующие каналы мы не используем, максимум 16 каналов
//    {1,0,0,1}, //канал 9
//    {0,1,0,1}, //канал 10
//    {1,1,0,1}, //канал 11
//    {0,0,1,1}, //канал 12
//    {1,0,1,1}, //канал 13
//    {0,1,1,1}, //канал 14
//    {1,1,1,1}  //канал 15
  };
  for(int i = 0; i < 4; i ++){
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }
  int val = analogRead(SIG);
  
  return val;
}
