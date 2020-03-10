#include "CyberLib.h"

#define EN 3
#define S0 4
#define S1 5
#define S2 6
#define S3 7 
#define SIG A0


void setup(){
  Serial.begin(9600);
  
  D4_Out; 
  D5_Out; 
  D6_Out; 
  D7_Out;   

  D4_Low;
  D5_Low;
  D6_Low;
  D7_Low;

  D3_Out; 
  D3_Low;
}


void loop(){

  //Читать в цикле 10 входов
  for(int i = 0; i < 9; i ++){
    Serial.println(readMux(i));    
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
    {0,0,0,1} //канал 8
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
  int val = A0_Read;
  
  return val;
}
