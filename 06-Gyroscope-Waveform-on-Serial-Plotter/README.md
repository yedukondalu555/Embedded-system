# Lab 6: Gyroscope Waveform on Serial Plotter

## Objective
Read real-time angular velocity (gyroscope) values (x, y, z) from the onboard LSM9DS1 IMU and visualize them as a live waveform on the Arduino Serial Plotter.

## Components Used
- Arduino Nano 33 BLE Sense (onboard LSM9DS1 IMU)
- `Arduino_LSM9DS1` library

## How It Works
- `IMU.begin()` initializes the IMU; the sketch halts if initialization fails.
- In `loop()`, `IMU.gyroscopeAvailable()` checks for new data, and `IMU.readGyroscope(x, y, z)` reads the gyroscope values.
- The x, y, z values are printed as a comma-separated line — the Serial Plotter reads this as three simultaneous waveforms.

## Files
- Code: [`code/gyroscope_waveform.ino`](code/gyroscope_waveform.ino)
- Screenshots: [`images/gyroscope_waveform_screenshot.png`](images/gyroscope_waveform_screenshot.png), [`images/gyroscope_waveform_screenshot_alt.png`](images/gyroscope_waveform_screenshot_alt.png)
- Demo video: [`videos/gyroscope_waveform_demo.mp4`](videos/gyroscope_waveform_demo.mp4)

## How to Run
1. Install the `Arduino_LSM9DS1` library via Library Manager.
2. Open `code/gyroscope_waveform.ino` and upload it.
3. Open **Tools → Serial Plotter** at 9600 baud.
4. Rotate the board and watch the x, y, z gyroscope waveforms update live.
