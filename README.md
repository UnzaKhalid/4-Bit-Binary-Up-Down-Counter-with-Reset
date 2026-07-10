# 4-Bit-Binary-Up-Down-Counter-with-Reset
A hardware-based 4-bit binary counter built with an Arduino Uno that uses three debounced push buttons to count up, count down, or reset the value from 0 to 15 across four physical LEDs.

This project implements a hardware-based **4-bit Binary Up/Down Counter** using an Arduino Uno. The system counts from `0` to `15` (`0000` to `1111` in binary) and displays the current count in real-time using 4 physical LEDs.

## 🚀 Features
* **Count Up Button:** Increments the counter by 1. Automatically wraps around from `15` back to `0`.
* **Count Down Button:** Decrements the counter by 1. Automatically wraps around from `0` backward to `15`.
* **Reset Button:** Instantly clears the counter memory and resets the display back to `0` (`0000`).
* **Debounced Inputs:** Optimized software delays to prevent button bouncing (switch chatter) and double-triggering.
* **Modular Code:** Utilizes a custom `updateLEDs()` function to handle binary bit manipulation efficiently.

## 🛠️ Hardware Requirements
* Arduino Uno (or compatible microcontroller)
* 4x LEDs (with suitable current-limiting resistors, e.g., 220Ω)
* 3x Push Buttons (using internal `INPUT_PULLUP` resistors)
* Breadboard and Jumper Wires

## ⚙️ How It Works
1. **Edge Detection:** The code compares the `current` button state with the `last` button state to ensure the counter changes exactly **once per click**, even if you hold the button down.
2. **Bitwise Reading:** The program uses the `bitRead()` function to extract individual bits from the decimal `count` variable and writes them directly to the corresponding LED pins.
3. **Software Debouncing:** A structured `delay(200);` is placed after every registered button press to filter out mechanical contact noise and ensure 100% stability.

## PROJECT SAMPLE:


https://github.com/user-attachments/assets/f81a0cd8-6f83-4f99-aadc-692bf6f756e1





