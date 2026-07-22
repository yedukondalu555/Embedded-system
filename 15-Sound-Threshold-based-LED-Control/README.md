# Lab 15: Sound-Threshold based LED Control

## Objective

Compare microphone sound level against a threshold and drive the onboard RGB LED accordingly.

## Requirements

- Arduino Nano 33 BLE Sense and USB Micro-B cable
- Arduino IDE with the Nano 33 BLE board package (includes `PDM.h`)

## Files

- Sketch: [`code/sound_threshold_led_control.ino`](code/sound_threshold_led_control.ino)
- Evidence and recording: [`images/`](images/) and [`videos/sound_threshold_demo.mp4`](videos/sound_threshold_demo.mp4)

## Run

1. Upload the sketch.
2. Make a loud sound near the microphone to exceed the configured threshold (default: `300`).
3. The LED is red when quiet and green when the threshold is exceeded. Adjust `SOUND_THRESHOLD` if needed.

