#include <HX711.h>                              //libraries
                                                
const int LOADCELL_DOUT_PIN = A1;                  //LoadCells
const int LOADCELL_SCK_PIN = A2;

HX711 scale; 

                                 
float calibration_factor = -31.6;
float units;
float ounces;


int row_excel = 0; // количество строк
uint8_t test = 123; // тестовая переменная, которая будет передана excel
uint8_t test_2 = 456; // вторая тестовая переменная, которая будет передана excel

void setup() {                              // start up

scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
Serial.begin(9600);

Serial.println("CLEARDATA"); // очистка листа excel
Serial.println("LABEL,Time,Test 1, Test 2, Num Rows"); // заголовки столбцов

scale.set_scale();
scale.tare();  //Reset the scale to 0

  long zero_factor = scale.read_average(); //Get a baseline reading
  Serial.print("Zero factor: "); //This can be used to remove the need to tare the scale. Useful in permanent scale projects.
  Serial.println(zero_factor);
}


void loop() { //reading sensors

row_excel++; // номер строки + 1
  Serial.print("DATA,TIME,"); // запись в excel текущей даты и времени
  Serial.print(test);
  Serial.print(",");
  Serial.print(test_2);
  Serial.print(",");
  Serial.println(row_excel);
  
  scale.set_scale(calibration_factor); //Adjust to this calibration factor

units = scale.get_units(), 1;
 if (units < 0)
  {
    units = 0.00;
  }
  ounces = units * 0.035274;

test = ounces;
test_2 = calibration_factor;
}
