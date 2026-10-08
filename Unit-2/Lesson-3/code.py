"""
Made by Elliott Roach
Made on 2026 feb
this turns the light on and off
"""

import board
import digitalio
import time

# setup
pin5 = digitalio.DigitalInOut(board.GP5)
pin5.direction = digitalio.Direction.OUTPUT

while True:
    pin5.value = True
    time.sleep(1)
    pin5.value = False
    time.sleep(1)
