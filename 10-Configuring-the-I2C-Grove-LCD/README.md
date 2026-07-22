# Lab 10: Configuring the I2C Grove LCD

## Objective

Interface a Grove I2C LCD with the Arduino Nano 33 BLE Sense and display custom text.

## Requirements

- Arduino Nano 33 BLE Sense and USB Micro-B cable
- Grove I2C LCD and Grove cable
- Arduino IDE
- `rgb_lcd` (Grove LCD RGB Backlight) library, installed from Library Manager

## Files

- Sketch: [`code/i2c_grove_lcd_setup.ino`](code/i2c_grove_lcd_setup.ino)
- Evidence: [`images/`](images/)
- Demo: [`videos/grove_lcd_demo.mp4`](videos/grove_lcd_demo.mp4)

## Run

1. Connect the LCD to the board I2C port (SDA/SCL, 3.3 V, GND).
2. Install the `rgb_lcd` library in Arduino IDE.
3. Open and upload the sketch.
4. Verify that both lines of text appear on the LCD.

