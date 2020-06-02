#ifndef DS18B20_H
#define DS18B20_H

#include "ds18_family.h"

class DS18B20: public DS18_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
