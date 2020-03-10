
#define EN 3
#define S0 22
#define S1 23
#define S2 24
#define S3 25 
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
  
    //Установка предделителя АЦП на :16
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

  
void loop(){  //Читать в цикле 10 входов
  
int val;

PORTA=B00000000; //крайнее правое значение 22 вход
val=analogRead(SIG);
Serial.println(val);

PORTA=B00000001;
val=analogRead(SIG);
Serial.println(val);

PORTA=B00000010;
val=analogRead(SIG);
Serial.println(val);

PORTA=B00000011;
val=analogRead(SIG);
Serial.println(val);

PORTA=B00000100;
val=analogRead(SIG);
Serial.println(val);

PORTA=B00000101;
val=analogRead(SIG);
Serial.println(val);

PORTA=B00000110;
val=analogRead(SIG);
Serial.println(val);

PORTA=B00000111;
val=analogRead(SIG);
Serial.println(val);

PORTA=B00001000;
val=analogRead(SIG);
Serial.println(val);

}
