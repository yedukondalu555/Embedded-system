# Labs 19-20: BLE Communication and RGB LED Control from Mobile Phone

## Objectives

- Lab 19: Establish BLE communication between the Nano 33 BLE Sense and a mobile phone.
- Lab 20: Control the onboard RGB LED from the mobile phone over BLE.

## Requirements

- Arduino Nano 33 BLE Sense
- USB Micro-B cable
- Arduino IDE
- `ArduinoBLE` library, installed through Library Manager
- A BLE mobile app compatible with Nordic UART Service (for example, Adafruit Bluefruit Connect)

## Files

- Combined sketch: [`code/ble_mobile_rgb_led_control.ino`](code/ble_mobile_rgb_led_control.ino)
- Connection and command evidence: [`images/ble_serial_monitor_result.jpg`](images/ble_serial_monitor_result.jpg)

## Run

1. Install `ArduinoBLE`, upload the sketch, and open Serial Monitor at **115200 baud**.
2. Use a BLE application to connect to the advertised device name shown in the sketch.
3. Send UART chat text to verify Lab 19 communication.
4. Send `1`, `2`, `3`, or `0` through the UART channel for red, green, blue, or off respectively.
5. If using Adafruit Bluefruit Connect, the Color Picker and Control Pad packets are also handled by the sketch.

## Note

No Lab 19-20 video was supplied; the provided Serial Monitor screenshot is retained as evidence.
