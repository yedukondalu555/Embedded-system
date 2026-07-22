# Lab 3: Print "Hello World / Your Name" on Serial Console

## Objective
Print a name to the Serial Monitor repeatedly, demonstrating basic `Serial` communication between the Arduino board and a PC.

## Components Used
- Arduino Nano 33 BLE Sense (USB connection to PC)

## How It Works
- `Serial.begin(9600)` starts serial communication at 9600 baud.
- `while (!Serial);` waits until the serial port is ready.
- In `loop()`, the text `"Satish Kumar Saw"` is printed every second.

## Files
- Code: [`code/serial_print_name.ino`](code/serial_print_name.ino)
- Screenshot: [`images/serial_console_output.png`](images/serial_console_output.png)
- No demo video was captured for this lab.

> Note: the original sketch was accidentally saved twice under two different sketch names with identical content — only one copy is kept here.

## How to Run
1. Select "Arduino Nano 33 BLE Sense" as the board and choose the correct port.
2. Open `code/serial_print_name.ino` and upload it.
3. Open the Serial Monitor at 9600 baud to see the name printed once every second.
