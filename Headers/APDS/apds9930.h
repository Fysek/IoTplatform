#ifndef APDS9930_H
#define APDS9930_H

#include "apds_family.h"

class APDS9930 : public APDS_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
