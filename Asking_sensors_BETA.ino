#include "ADCBETA.h"                              //libraries
                                                
float units;
float grams;


int row_excel = 0; // количество строк
uint8_t test = 123; // тестовая переменная, которая будет передана excel
uint8_t test_2 = 456; // вторая тестовая переменная, которая будет передана excel

ADCBETA adcbeta;

void setup() {                              // start up

Serial.begin(9600);
adcbeta.tare(10);

Serial.println("CLEARDATA"); // очистка листа excel
Serial.println("LABEL,Time,Test 1, Test 2, Num Rows"); // заголовки столбцов

}


void loop() { //reading sensors

row_excel++; // номер строки + 1
  Serial.print("DATA,TIME,"); // запись в excel текущей даты и времени
  Serial.print(test);
  Serial.print(",");
  Serial.println(row_excel);
  

units = adcbeta.get_grams();
 if (units < 0)
  {
    units = 0.00;
  }
  grams = units * 0.035274;

test = grams;

}
