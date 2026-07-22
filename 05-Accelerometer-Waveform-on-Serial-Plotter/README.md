# Lab 5: Accelerometer Waveform on Serial Plotter

## Objective
Read real-time acceleration values (x, y, z) from the onboard LSM9DS1 IMU and visualize them as a live waveform on the Arduino Serial Plotter.

## Components Used
- Arduino Nano 33 BLE Sense (onboard LSM9DS1 IMU)
- `Arduino_LSM9DS1` library

## How It Works
- `IMU.begin()` initializes the IMU; the sketch halts if initialization fails.
- In `loop()`, `IMU.accelerationAvailable()` checks for new data, and `IMU.readAcceleration(x, y, z)` reads the acceleration values.
- The x, y, z values are printed as a comma-separated line — the Serial Plotter reads this as three simultaneous waveforms.

## Files
- Code: [`code/accelerometer_waveform.ino`](code/accelerometer_waveform.ino)
- Screenshot: [`images/accelerometer_waveform_screenshot.png`](images/accelerometer_waveform_screenshot.png)
- Demo video: [`videos/accelerometer_waveform_demo.mp4`](videos/accelerometer_waveform_demo.mp4)

## How to Run
1. Install the `Arduino_LSM9DS1` library via Library Manager.
2. Open `code/accelerometer_waveform.ino` and upload it.
3. Open **Tools → Serial Plotter** at 9600 baud.
4. Move the board and watch the x, y, z acceleration waveforms update live.
