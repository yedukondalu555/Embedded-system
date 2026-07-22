# Lab 17: Bare-Metal Timer as Counter with Proximity Sensor

## Objective

Detect proximity events with APDS9960, count each hand-detection event, blink the builtin LED for every event, and update the RGB LED after the configured count.

## Requirements

- Arduino Nano 33 BLE Sense
- USB Micro-B cable
- Arduino IDE
- `Arduino_APDS9960` library, installed through Library Manager

## Files

- Sketch: [`code/proximity_event_counter.ino`](code/proximity_event_counter.ino)
- Demo: [`videos/proximity_event_counter_demo.mp4`](videos/proximity_event_counter_demo.mp4)

## Run

1. Install `Arduino_APDS9960`, then upload the sketch.
2. Open Serial Monitor at **115200 baud**.
3. Move a hand into and out of range to register one event per detection.
4. The builtin LED ticks for every event; the RGB LED switches to green at count 10 and resets after the next event.

## Note

No screenshot for Lab 17 was supplied; the original demo video is included.

