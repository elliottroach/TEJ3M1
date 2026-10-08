"""
Created by Elliott Roach
Created on Mar 2026
This is a sonar distance sensors and moves a servo if under 50 cm.
"""

import board
import digitalio
import time
import pwmio
from adafruit_motor import servo
import adafruit_hcsr04

# setup
sonar = adafruit_hcsr04.HCSR04(trigger_pin = board.GP9, echo_pin=board.GP10)
pwm = pwmio.PWMOut(board.GP11, duty_cycle= 2 ** 15, frequency= 50)

my_servo = servo.Servo(pwm)
my_servo.angle = 0
servo_angle = 0


# infinte loop
while True:
    try:
        distance = sonar.distance
        print(distance)
        if distance < 50:
            if servo_angle > 170:
                diffrence = -5
            elif servo_angle < 10:
                diffrence = 5
            servo_angle += diffrence
            my_servo.angle = servo_angle
    except RuntimeError:
        print("Error")
    time.sleep(0.1)
