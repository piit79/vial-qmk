# Lumberjack-C

Through-hole ortholinear 60% keyboard PCB

![Lumberjack](https://github.com/peej/lumberjack-keyboard/raw/master/images/pcb.jpg)

12x5 ortholinear PCB for 60% tray mount cases with only through hole components.

* [Original design](https://github.com/peej/lumberjack-keyboard) by [Paul James](https://github.com/peej)
* Modified by [piit79 / 42. Keebs](https://github.com/piit79/lumberjack-keyboard)
* Uses ATmega328p MCU with vusb

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb 42keebs/lumberjack_c -km vial

## Bootloader

Use USBaspLoader in [hsgw's repository](https://github.com/hsgw/USBaspLoader/tree/plaid).
