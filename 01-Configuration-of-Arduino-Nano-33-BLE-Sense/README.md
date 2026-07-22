# Lab 1: Configuration of Arduino Nano 33 BLE Sense

## Objective
Verify that the Arduino Nano 33 BLE Sense board is correctly set up in the Arduino IDE (board package, drivers, and upload pipeline all working) by uploading a simple onboard RGB LED sketch and confirming it runs.

## Components Used
- Arduino Nano 33 BLE Sense
- Arduino IDE with the Arduino Mbed OS Nano Boards package installed

## How It Works
- The onboard RGB LED pins (`LEDR`, `LEDG`, `LEDB`) are set as `OUTPUT` and initialized `HIGH` (off — these LEDs are active-LOW on this board).
- In `loop()`, the sketch cycles through Red → Green → Blue, holding each color for 1 second.
- Successfully seeing this cycle confirms the board is configured and communicating correctly.

## Files
- Code: [`code/rgb_led_config_test.ino`](code/rgb_led_config_test.ino)
- Screenshot: [`images/board_config_test_screenshot.png`](images/board_config_test_screenshot.png)
- Demo video: [`videos/board_config_test_demo.mp4`](videos/board_config_test_demo.mp4) *(shared with Lab 2 — same demo run)*

## How to Run
1. Install the "Arduino Mbed OS Nano Boards" package via Boards Manager.
2. Select "Arduino Nano 33 BLE Sense" as the board and choose the correct port.
3. Open `code/rgb_led_config_test.ino` and upload it.
4. Confirm the onboard RGB LED cycles through Red, Green, and Blue — this confirms the board is configured correctly.
