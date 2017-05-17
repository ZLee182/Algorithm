#!/usr/bin python
# -*- coding: utf8 -*-
import RPi.GPIO as GPIO
import time
PIN_NO=13
GPIO.setmode(GPIO.BOARD)
GPIO.setup(PIN_NO, GPIO.OUT)
GPIO.output(PIN_NO,GPIO.HIGH)
time.sleep(200)
GPIO.cleanup()
