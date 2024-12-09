# pISOlation

![pISOlation PCB]()

A seamless ISO single-key "macropad" based on the Raspberry Pi RP2040 MCU

* Keyboard Maintainer: [piit79](https://github.com/piit79)
* Hardware Supported: ISOlation RGB PCB
* Hardware Availability: [Open source project](https://github.com/piit79/pISOlation), kits available at [42. Keebs]()

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb 42keebs/pisolation -km vial

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

To enter the bootloader mode for flashing:

* Hold the BOOT button, press RESET, release BOOT
* With a recent QMK/Vial firmware flashed - double-tap the RESET button quickly
