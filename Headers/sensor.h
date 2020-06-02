#ifndef SENSOR_H
#define SENSOR_H

#include "data.h"
#include <iostream>


class Sensor {
  private:
	int m_id;

  public:
	Sensor();
	~Sensor();
	int getSensorID();
	virtual void configure() = 0;
	virtual void measure(int delayTime, int nMeas, Data &outputData, char *outputFile) = 0;

};
#endif
