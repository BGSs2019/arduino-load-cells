#pragma once
#include <Arduino.h>

// class initialization

class ADCBETA
{
private:
	byte SCK;	// Power Down and Serial Clock Input Pin
	byte DT;		// Serial Data Output Pin
  long OFFSET = 0;
public:

	ADCBETA();
	virtual ~ADCBETA();
	bool ready();
	float get();
  float get_grams();
  void tare(byte times);
  long read_average(byte times);
};
	
// methods description

ADCBETA::ADCBETA() {
	SCK = A2;
	DT = A1;
	pinMode(SCK, OUTPUT);
	pinMode(DT, INPUT);
}

ADCBETA::~ADCBETA() {
}

bool ADCBETA::ready() {
	return digitalRead(DT) == LOW;
}

float ADCBETA::get() {

byte 	GAIN = 1;

	while (!ready());

	byte data[3];

	for (byte j = 3; j--;) {
		data[j] = shiftIn(DT, SCK, MSBFIRST);
	}

	for (int i = 0; i < GAIN; i++) {
		digitalWrite(SCK, HIGH);
		digitalWrite(SCK, LOW);
	}

	data[2] ^= 0x80;
	return ((uint32_t)data[2] << 16) | ((uint32_t)data[1] << 8) | (uint32_t)data[0];
}

float ADCBETA::get_grams() {
  return (get()-OFFSET)/(-31.6);
}

void ADCBETA::tare(byte times) {
  double sum = read_average(times);
  OFFSET = sum;
}

long ADCBETA::read_average(byte times) {
  long sum = 0;
  for (byte i = 0; i < times; i++) {
    sum += get();
  }
  return sum / times;
}
