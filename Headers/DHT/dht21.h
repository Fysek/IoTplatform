#ifndef DHT21_H
#define DHT21_H

#include "dht_family.h"

class DHT21: public DHT_Family {
  public:
      void configure() override;
      void measure(int delayTime, int nMeas, Data& outputData, char* outputFile) override;
};

#endif
