# Lab 9: Reading Analog Input on Channel A6

## Status: Stand-in ⚠️

The actual A6 analog-read sketch, screenshot, and video have not been provided yet. Per your instruction, the onboard **PDM microphone** sketch is included here as a temporary stand-in so the repo has all 9 lab folders filled — **replace it once the real Channel A6 code is ready.**

## Objective (actual lab)
Read an analog voltage on pin `A6` using `analogRead()` and print/plot the resulting value.

## What's Here Instead (stand-in)
### PDM Microphone Sound Level
- Reads audio samples from the onboard PDM microphone and prints the peak sound level to the Serial Monitor.
- `PDM.onReceive(onPDMdata)` registers a callback that fires when new audio data is available.
- `PDM.begin(1, 16000)` starts the microphone in mono at a 16 kHz sample rate.
- In `loop()`, the sketch finds the sample with the largest absolute value in the buffer and prints it as the peak level.

## Files
- Code (stand-in): [`code/pdm_microphone_STANDIN.ino`](code/pdm_microphone_STANDIN.ino)
- Demo video (stand-in): [`videos/pdm_microphone_STANDIN_demo.mp4`](videos/pdm_microphone_STANDIN_demo.mp4)
- No screenshot was provided.

## To Do
Replace the stand-in files above with:
- An `analogRead(A6)` sketch
- A screenshot of the analog values (Serial Monitor or Plotter)
- A demo video of it running
