#include <Arduino_LSM9DS1.h>

float x, y, z;

void setup()
{
  Serial.begin(9600);

  while (!Serial);

  if (!IMU.begin())
  {
    while (1);
  }
}

void loop()
{
  if (IMU.accelerationAvailable())
  {
    IMU.readAcceleration(x, y, z);

    Serial.print(x);
    Serial.print(",");

    Serial.print(y);
    Serial.print(",");

    Serial.println(z);
  }
}