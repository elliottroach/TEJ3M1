"""
Created by Elliott Roach
Created on Mar 2026
This senses the distance
"""

import board
import digitalio
import time
import adafruit_hcsr04

# setup
sonar = adafruit_hcsr04.HCSR04(trigger_pin = board.GP9, echo_pin=board.GP10)

# infinte loop
while True:
    try:
        print(sonar.distance)
    except RuntimeError:
        print("Error")
    time.sleep(0.1)
