# Lab 2: Built-in LED Blink

## Objective
Blink the board's built-in LED. On the Arduino Nano 33 BLE Sense, the "built-in" LED is the onboard RGB LED (`LEDR`, `LEDG`, `LEDB`), so this lab uses the same LED-cycling sketch as Lab 1.

## Components Used
- Arduino Nano 33 BLE Sense (onboard RGB LED)

## How It Works
- The RGB LED pins are set as `OUTPUT` and initialized `HIGH` (off, active-LOW).
- In `loop()`, the sketch cycles through Red → Green → Blue, holding each color for 1 second — demonstrating that the built-in LED can be controlled from code.

## Files
- Code: [`code/builtin_led_blink.ino`](code/builtin_led_blink.ino) *(same sketch as Lab 1)*
- Screenshot: [`images/builtin_led_blink_screenshot.png`](images/builtin_led_blink_screenshot.png)
- Demo video: [`videos/builtin_led_blink_demo.mp4`](videos/builtin_led_blink_demo.mp4) *(shared with Lab 1 — same demo run)*

## How to Run
1. Select "Arduino Nano 33 BLE Sense" as the board and choose the correct port.
2. Open `code/builtin_led_blink.ino` and upload it.
3. Observe the onboard RGB LED blinking through Red, Green, and Blue.
