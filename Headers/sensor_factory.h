#ifndef SENSOR_FACTORY_H
#define SENSOR_FACTORY_H

#include "sensor.h"
#include "../Headers/APDS/apds9930.h"
#include "../Headers/APDS/apds9960.h"
#include "../Headers/BME/bme280.h"
#include "../Headers/BME/bme680.h"
#include "../Headers/DHT/dht11.h"
#include "../Headers/DHT/dht12.h"
#include "../Headers/DHT/dht21.h"
#include "../Headers/DHT/dht22.h"
#include "../Headers/DS18/ds18b20.h"
#include "../Headers/DS18/ds18s20.h"


enum SensorType { 
	ST_APDS9930,
	ST_APDS9960,
	ST_BME280,
	ST_BME680,
	ST_DHT11, 
	ST_DHT12, 
	ST_DHT21, 
	ST_DHT22, 
	ST_DS18B20,
	ST_DS18S20
}; 

class SensorFactory {

  public:
	Sensor* CreateSensor(SensorType type); 
	void DestroySensor(Sensor* sensor); 
};


#endif


