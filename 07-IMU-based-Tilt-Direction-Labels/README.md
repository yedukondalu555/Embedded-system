# Lab 7: IMU-based Tilt Direction Labels

## Objective
Use accelerometer readings to detect which direction the board is tilted and print a human-readable label (Left, Right, Front, Back) to the Serial Monitor — logging only, no LED output.

## Components Used
- Arduino Nano 33 BLE Sense (onboard LSM9DS1 IMU)
- `Arduino_LSM9DS1` library

## How It Works
- `IMU.readAcceleration(x, y, z)` reads live acceleration values.
- Simple threshold checks classify the tilt direction:
  - `x > 0.5` → "Right"
  - `x < -0.5` → "Left"
  - `y > 0.5` → "Front"
  - `y < -0.5` → "Back"
- The detected label is printed to the Serial Monitor every 200 ms.

## Files
- Code: [`code/tilt_direction_labels.ino`](code/tilt_direction_labels.ino)
- Demo video: [`videos/tilt_direction_labels_demo.mp4`](videos/tilt_direction_labels_demo.mp4)
- No screenshot was captured for this lab.

## How to Run
1. Install the `Arduino_LSM9DS1` library via Library Manager.
2. Open `code/tilt_direction_labels.ino` and upload it.
3. Open the Serial Monitor at 9600 baud.
4. Tilt the board left/right/front/back and watch the corresponding label print.
