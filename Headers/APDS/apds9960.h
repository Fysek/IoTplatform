#ifndef APDS9960_H
#define APDS9960_H

#include "apds_family.h"

class APDS9960: public APDS_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
