# Lab 8: IMU-based Tilt Control of RGB LED

## Objective
Combine the accelerometer and onboard RGB LED: light a different LED color depending on which direction the board is tilted (building on the direction detection from Lab 7, with RGB output added).

## Components Used
- Arduino Nano 33 BLE Sense (onboard LSM9DS1 IMU + RGB LED)
- `Arduino_LSM9DS1` library

## How It Works
- `IMU.readAcceleration(x, y, z)` reads live acceleration values.
- Based on tilt direction, a different onboard LED (or combination) is lit:
  - `x > 0.5` (Right) → Green LED
  - `x < -0.5` (Left) → Red LED
  - `y > 0.5` (Front) → Blue LED
  - `y < -0.5` (Back) → Red + Green LEDs together
- All LEDs are reset to off at the start of each loop before the correct one is lit.

> Note: the current sketch drives the RGB LED based on tilt but does not also print the direction label to the Serial Monitor. If you want both together (LED + serial log), add a `Serial.println(...)` call alongside each LED branch.
>
> Also note: the original sketch was accidentally saved twice under two different sketch names with identical content — only one copy is kept here.

## Files
- Code: [`code/tilt_control_rgb_led.ino`](code/tilt_control_rgb_led.ino)
- Screenshot: [`images/tilt_control_rgb_led_screenshot.png`](images/tilt_control_rgb_led_screenshot.png)
- Demo videos: [`videos/tilt_control_rgb_led_demo.mp4`](videos/tilt_control_rgb_led_demo.mp4), [`videos/tilt_control_rgb_led_demo_alt.mp4`](videos/tilt_control_rgb_led_demo_alt.mp4)

## How to Run
1. Install the `Arduino_LSM9DS1` library via Library Manager.
2. Open `code/tilt_control_rgb_led.ino` and upload it.
3. Tilt the board in different directions and observe the onboard RGB LED change color accordingly.
