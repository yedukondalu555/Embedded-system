# Lab 12: Streaming Gesture Data to a Web Page

## Objective

Send APDS9960 gesture labels over USB Serial and display the latest value on a local web page.

## Requirements

- Arduino Nano 33 BLE Sense and USB Micro-B cable
- Arduino IDE with `Arduino_APDS9960`
- Python 3.10 or later
- Python packages listed in [`code/requirements.txt`](code/requirements.txt): Flask and pyserial

## Files

- Arduino sketch: [`code/gesture_sender.ino`](code/gesture_sender.ino)
- Flask server: [`code/app.py`](code/app.py)
- Web page: [`code/templates/index.html`](code/templates/index.html)
- Evidence and recordings: [`images/`](images/) and [`videos/`](videos/)

## Run

1. Upload `gesture_sender.ino` and close Arduino Serial Monitor.
2. In `code/app.py`, set `PORT` to the board's current COM port.
3. From the `code` folder, run `python -m pip install -r requirements.txt`.
4. Run `python app.py`, then open `http://127.0.0.1:5000`.
5. Perform a gesture and confirm that the browser updates.

