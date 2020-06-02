#ifndef BME680_H
#define BME680_H

#include "bme_family.h"

class BME680: public BME_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
