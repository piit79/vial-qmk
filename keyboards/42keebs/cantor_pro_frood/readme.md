# Cantor Pro Frood

![cantor](https://i.imgur.com/Uvxm3zVh.jpg)

The Cantor Pro Frood keyboard is a 42 key diodeless split keyboard, designed with simplicity in mind. It based on the original [Cantor](https://github.com/diepala/cantor) by [Diego Palacios](https://github.com/diepala), itself inspired by the popular [corne](https://github.com/foostan/crkbd), [ferris](https://github.com/pierrechevalier83/ferris) and [sweep](https://github.com/davidphilipbarr/Sweep) keyboards, aiming to provide a more ergonomic (stronger column stagger) corne-like layout with a simple, easy to assemble and cheap design.

Cantor Pro Frood, as the name suggests, uses the powerful but affordable [42. Keebs Frood](https://github.com/piit79/Frood) RP2040-based controller instead of the STM32-based Black Pill. Apart from this main change, it also has a slightly smaller (narrower) form factor thanks to the smaller controller. It also includes a FR4 and laser cut switch and bottom plates.

* Keyboard Maintainer: [piit79](https://github.com/piit79)
* Hardware Supported: 42. Keebs Frood RP2040-based MCU
* Hardware Availability: [42. Keebs](https://42keebs.eu/shop/kits/pro-micro-based/cantor-pro-frood-40-low-profile-hotswap-split-ergo-kit/)

Make example for this keyboard (after setting up your build environment):

    make 42keebs/cantor_pro_frood:vial

To flash the firmware .uf2 file, reset the Frood to the bootloader mode (see below) which will present it as a USB mass storage device (a.k.a. USB flash) and copy the file to the device.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 4 ways:

* **Bootmagic reset**: Hold down the top left key and plug in the keyboard. For the right side, hold the top right key and plug the keyboard.
* **Physical reset button**: 
  * Press and hold the BOOT button.
  * Press and release the RESET button.
  * Release the BOOT button.
* **Double-tap the RESET button**
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
