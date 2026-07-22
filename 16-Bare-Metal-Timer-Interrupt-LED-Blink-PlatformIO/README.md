# Lab 16: Bare-Metal Timer Interrupt - LED Blink (PlatformIO)

## Objective

Configure nRF52840 TIMER4 directly and blink the onboard LED every second using a timer interrupt.

## Requirements

- Arduino Nano 33 BLE Sense and USB Micro-B cable
- Visual Studio Code
- PlatformIO IDE extension

## Files

- PlatformIO configuration: [`platformio.ini`](platformio.ini)
- Source: [`code/src/main.cpp`](code/src/main.cpp)
- Evidence: [`images/timer4_blink_result.png`](images/timer4_blink_result.png)

## Run

1. Open this folder as a PlatformIO project in VS Code.
2. Select the `nano33ble` environment, then build and upload.
3. Confirm the builtin LED toggles once per second.

## Note

No Lab 16 video was supplied in the source archive; the captured image is retained.
