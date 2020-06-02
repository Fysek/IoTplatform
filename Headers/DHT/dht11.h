#ifndef DHT11_H
#define DHT11_H

#include "dht_family.h"

class DHT11: public DHT_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
