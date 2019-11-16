#include <HX711.h>

const int LOADCELL_DOUT_PIN = A1;
const int LOADCELL_SCK_PIN = A2;


/*
 Setup your scale and start the sketch WITHOUT a weight on the scale
 Once readings are displayed place the weight on the scale
 Press +/- or a/z to adjust the calibration_factor until the output readings match the known weight
 Arduino pin 6 -> HX711 CLK
 Arduino pin 5 -> HX711 DOUT
 Arduino pin 5V -> HX711 VCC
 Arduino pin GND -> HX711 GND 
*/


HX711 scale;   // DT, CLK

float calibration_factor = -31.6; // this calibration factor is adjusted according to my load cell
float units;
float ounces;

int row_excel = 0; // количество строк
int test = 123; // тестовая переменная, которая будет передана excel
int test_2 = 456; // вторая тестовая переменная, которая будет передана excel

void setup() {
  
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  Serial.begin(9600);
  Serial.println("CLEARDATA"); // очистка листа excel
  Serial.println("LABEL,Time,Test 1, Test 2, Num Rows"); // заголовки столбцов
  Serial.println("HX711 calibration sketch");
  Serial.println("Remove all weight from scale");
  Serial.println("After readings begin, place known weight on scale");
  Serial.println("Press + or a to increase calibration factor");
  Serial.println("Press - or z to decrease calibration factor");

  scale.set_scale();
  scale.tare();  //Reset the scale to 0

  long zero_factor = scale.read_average(); //Get a baseline reading
  Serial.print("Zero factor: "); //This can be used to remove the need to tare the scale. Useful in permanent scale projects.
  Serial.println(zero_factor);
}

void loop() {
  
   row_excel++; // номер строки + 1
  Serial.print("DATA,TIME,"); // запись в excel текущей даты и времени
  Serial.print(test);
  Serial.print(",");
  //Serial.print(test_2);
  Serial.print(",");
  Serial.println(row_excel);

  scale.set_scale(calibration_factor); //Adjust to this calibration factor

  Serial.print("Reading: ");
  units = scale.get_units(), 10;
  if (units < 0)
  {
    units = 0.00;
  }
  ounces = units * 0.035274;

test = ounces;
test_2 = calibration_factor;
  
  Serial.print(ounces);
  Serial.print("DATA,TIME,");     //для перевода в Exel, 1 колонка со временем остальные из кода 2
    Serial.print(" ,");
  Serial.print(" grams"); 
  Serial.print(" calibration_factor: ");
  Serial.print(calibration_factor);
  Serial.println();

  if(Serial.available())
  {
    char temp = Serial.read();
    if(temp == '+' || temp == 'a')
      calibration_factor += 1;
    else if(temp == '-' || temp == 'z')
      calibration_factor -= 1;
  }
}
