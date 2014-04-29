#!/bin/bash -x
#
# A command line script to program an Arduino Pmon Uno board via the ICSP connector.
# Requires an installed avrdude software and having a working programmer.

# See avrdude command line options here http://www.nongnu.org/avrdude/user-manual/avrdude.html

# Set this to the code of the programmer you have. See above link for programmer codes.
#
PROGRAMMER_CODE="avrispmkII"

avrdude \
  -B 4  \
  -c ${PROGRAMMER_CODE} \
  -p m328p \
  -v -v -v \
  -u \
  -U lfuse:w:0xff:m \
  -U hfuse:w:0xda:m \
  -U efuse:w:0x05:m \
  -U flash:w:pmon_uno_flash.hex:i

avrdude \
  -B 4  \
  -c ${PROGRAMMER_CODE} \
  -p m328p \
  -v -v -v \
  -U flash:w:pmon_uno_flash.hex:i

