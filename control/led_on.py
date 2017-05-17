#!/usr/bin python
# -*- coding: utf8 -*-

import RPi.GPIO as GPIO
import time
PIN_NO=12
GPIO.setmode(GPIO.BOARD)
GPIO.setup(PIN_NO, GPIO.OUT)
for x in xrange(500):
	GPIO.output(PIN_NO,GPIO.HIGH)¡ª
	time.sleep(20)
	GPIO.output(PIN_NO,GPIO.LOW )
	time.sleep(2)
	GPIO.cleanup()¡ª¡ªrpi.gpio