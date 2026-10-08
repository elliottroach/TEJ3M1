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
timer = 1

while True:
    led.value = True
    time.sleep(timer)
    led.value = False
    time.sleep(timer)
    timer = timer + 1
    #timer += 1  (for next time)
