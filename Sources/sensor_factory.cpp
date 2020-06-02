#include "../Headers/sensor_factory.h"

Sensor* SensorFactory::CreateSensor(SensorType type) { 
    if (type == ST_APDS9930)
        return new APDS9930();
    else if (type == ST_APDS9960)
        return new APDS9960();
    else if (type == ST_BME280)
        return new BME280();
    else if (type == ST_BME680)
        return new BME680();
    else if (type == ST_DHT11) 
        return new DHT11(); 
    else if (type == ST_DHT12)
        return new DHT12();
    else if (type == ST_DHT21)
        return new DHT21();
    else if (type == ST_DHT22)
        return new DHT22();
	else if (type == ST_DS18B20) 
        return new DS18B20(); 
    else if (type == ST_DS18S20)
        return new DS18S20();
    else return NULL; 
} 

void SensorFactory::DestroySensor(Sensor* sensor) { 
    if(sensor){
		delete sensor;
    }
} 