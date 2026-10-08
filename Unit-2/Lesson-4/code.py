"""
Made by Elliott Roach
Made on 2026 Mar
this changes the color of a RGB LED.
"""

import board
import digitalio
import time

# setup

# Red
pin5 = digitalio.DigitalInOut(board.GP5)
pin5.direction = digitalio.Direction.OUTPUT

# Blue
pin6 = digitalio.DigitalInOut(board.GP6)
pin6.direction = digitalio.Direction.OUTPUT

# Green
pin7 = digitalio.DigitalInOut(board.GP7)
pin7.direction = digitalio.Direction.OUTPUT

while True:

    # red
    pin5.value = True
    pin6.value = False
    pin7.value = False
    time.sleep(1)

    # blue
    pin5.value = False
    pin6.value = True
    pin7.value = False
    time.sleep(1)

    # green
    pin5.value = False
    pin6.value = False
    pin7.value = True
    time.sleep(1)

    # purple
    pin5.value = True
    pin6.value = True
    pin7.value = False
    time.sleep(1)

    # cyan
    pin5.value = False
    pin6.value = True
    pin7.value = True
    time.sleep(1)

    # yellow
    pin5.value = True
    pin6.value = False
    pin7.value = True
    time.sleep(1)

    # white
    pin5.value = True
    pin6.value = True
    pin7.value = True
    time.sleep(1)
