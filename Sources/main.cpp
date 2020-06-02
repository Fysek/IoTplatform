#include "../Headers/sensor.h"
#include "../Headers/sensor_factory.h"
#include <iostream>

int main()
{
    SensorFactory* sensorFactory = new SensorFactory();

    Sensor* sensorAPDS9930;
    Sensor* sensorAPDS9960;
    Sensor* sensorBME280;
    Sensor* sensorBME680;

    sensorAPDS9930 = sensorFactory->CreateSensor(ST_APDS9930);
    sensorAPDS9960 = sensorFactory->CreateSensor(ST_APDS9960);
    sensorBME280 = sensorFactory->CreateSensor(ST_BME280);
    sensorBME680 = sensorFactory->CreateSensor(ST_BME680);

    std::cout << sensorBME280->getSensorID() << std::endl;
    std::cout << sensorBME680->getSensorID() << std::endl;

    sensorFactory->DestroySensor(sensorAPDS9930);
    sensorFactory->DestroySensor(sensorAPDS9960);
    sensorFactory->DestroySensor(sensorBME280);
    sensorFactory->DestroySensor(sensorBME680);

    return 0;
}


