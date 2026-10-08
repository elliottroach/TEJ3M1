"""
Made by Elliott Roach
Made on 2026 feb
this turns the light on and off
"""

import board
import digitalio
import time

# setup
led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT

while True:
    led.value = True
    time.sleep(1)
    led.value = False
    time.sleep(1)
