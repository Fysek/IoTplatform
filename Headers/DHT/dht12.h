#ifndef DHT12_H
#define DHT12_H

#include "dht_family.h"

class DHT12: public DHT_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
