# Reviung5 Plus

![Reviung5](https://github.com/gtips/reviung/blob/master/reviung5/image/reviung5-1.jpg)  

The Reviung5 Plus is a 3-5-key macropad with support for 0-2 independent rotary encoders.

Based on the original [Reviung5](https://github.com/gtips/reviung/tree/master/reviung5) by [gtips](https://github.com/gtips)

Improved by [piit79 of 42. Keebs](https://github.com/piit79/reviung/tree/master/reviung5) with the following modifications:

* Removed switch diodes and switched from matrix to direct pins
* Added support for 2 independent encoders
* Added support for 0.91" 128x32px OLED screen
* Added full layered acrylic case

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb 42keebs/reviung5 -km vial

To build for the Frood, use the following command line:

    qmk compile -kb 42keebs/reviung5 -km vial -e CONVERT_TO=frood

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
