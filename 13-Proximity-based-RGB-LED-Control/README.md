# Lab 13: Proximity-based RGB LED Control

## Objective

Read proximity values from APDS9960 and change the onboard RGB LED according to the measured range.

## Requirements

- Arduino Nano 33 BLE Sense and USB Micro-B cable
- Arduino IDE
- `Arduino_APDS9960` library

## Files

- Sketch: [`code/proximity_rgb_led_control.ino`](code/proximity_rgb_led_control.ino)
- Evidence and recordings: [`images/`](images/) and [`videos/`](videos/)

## Run

1. Install `Arduino_APDS9960` and upload the sketch.
2. Bring an object near the APDS9960 sensor.
3. Observe the RGB LED: red below 100, green from 100-199, and blue at 200 or above.

