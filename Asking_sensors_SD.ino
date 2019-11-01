#include <HX711.h>                              //libraries
#include <SD.h>


int CS_pin = 10;

                                                
const int LOADCELL_DOUT_PIN = A1;                  //LoadCells
const int LOADCELL_SCK_PIN = A2;

HX711 scale;                                   
float calibration_factor = -31.6;
float units;
float ounces;

void setup() {                              // start up

scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
Serial.begin(9600);

 Serial.println("Initializing Card");
 //Назначаем пин CS_pin выходом
 pinMode(CS_pin, OUTPUT);

 // Проверяем доступность карты
 if (!SD.begin(CS_pin)) {
 Serial.println("Card Failure");
 return;
 }
 Serial.println("Card Ready");


scale.set_scale();
scale.tare();  //Reset the scale to 0

  long zero_factor = scale.read_average(); //Get a baseline reading
  Serial.print("Zero factor: "); //This can be used to remove the need to tare the scale. Useful in permanent scale projects.
  Serial.println(zero_factor);
}


void loop() { //reading sensors

scale.set_scale(calibration_factor); //Adjust to this calibration factor

units = scale.get_units(), 1;
 if (units < 0)
  {
    units = 0.00;
  }
  ounces = units * 0.035274;
 
 // Открываем файл и записываем строку
 // В одно время можно открывать только один файл
 // Если файла нет то он будет создан
 File logFile = SD.open("LOG.txt", FILE_WRITE);
 
 if (logFile) {
 logFile.println(ounces);
 logFile.close();
 Serial.println(ounces);
 } else {
 Serial.println("LOG.txt");
 Serial.println("Couldn't open log file");
 }
}
