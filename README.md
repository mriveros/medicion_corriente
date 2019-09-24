### Low-Power
Lightweight low power library for Arduino.
This program calculates the current using a non-invasive current sensor connected to an arduino, and then sends the data to a web server using an ESP8266 WIFI device. Upon receiving the measurements, one or more databases are saved by cygnus. This work aims to create an IoT environment.
Version: 1.60

Date: 01-04-2016

Devices Supported:
* ATMega168
* ATMega328P
* ATMega32U4
* ATMega2560
* ATMega256RFR2
* ATSAMD21G18A

####Notes:
External interrupt during standby on ATSAMD21G18A requires a patch to the <a href="https://github.com/arduino/ArduinoCore-samd">Arduino SAMD Core</a> in order for it to work. Fix is provided by this particular <a href="https://github.com/arduino/ArduinoCore-samd/pull/90">pull request</a>.
