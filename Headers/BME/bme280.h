#ifndef BME280_H
#define BME280_H

#include "bme_family.h"

class BME280: public BME_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
