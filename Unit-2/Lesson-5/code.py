
"""
Made by Elliott Roach
Made on 2026 Mar
this turns a servo 0 to 180
"""

import board
import time
import pwmio
from adafruit_motor import servo

# setup
pwm = pwmio.PWMOut(board.GP2, duty_cycle= 2 ** 15, frequency= 50)

my_servo = servo.Servo(pwm)
my_servo.angle = 0

# doing actions
while True:
    my_servo.angle = 0
    time.sleep(1)
    my_servo.angle = 180
    time.sleep(1)
