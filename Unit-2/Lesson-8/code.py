"""
Created by Elliott Roach
Created on Apr 2026
This is a potencheomitor that controls a servo servo
"""

import board
import digitalio
import time
import pwmio
from adafruit_motor import servo
import analogio

# setup
potentiometer = analogio.AnalogIn(board.GP26)
data_wire = pwmio.PWMOut(board.GP11, duty_cycle= 2 ** 15, frequency= 50)
my_servo = servo.Servo(data_wire)
my_servo.angle = 0
servo_angle = 0
ratio = 65535 / 180
# 65535 is max resestance, 180 is max angle servo can go

while True:
    try:
        angle = (potentiometer.value) / ratio
        my_servo.angle = angle
    except RuntimeError:
        print("Error")
    time.sleep(0.1)
