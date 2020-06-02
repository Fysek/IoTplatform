#ifndef DHT22_H
#define DHT22_H

#include "dht_family.h"

class DHT22: public DHT_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
