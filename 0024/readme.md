
# STREAMCHEAP VIAL PORT

## Add 3 50mm LED Layer Indicators

Pin LED:

- LED_00 pin B6
- LED_01 pin B1
- LED_02 pin B3

2 led for layer indicator 
1 led for NUMLOCK

## Build Instructions

1. Copy the `2x4` folder to `handwired/stream_cheap/` in your Vial Build Environment.
2. Run the following command:

```bash
make handwired/stream_cheap/2x4:vial


Alternatively, you can install the firmware I've already made.

## How to Flash the Vial Firmware

1. Use QMK Toolbox and select the `.hex` file.
2. Reset into Bootloader and clear EEPROM.
3. Reset into Bootloader again and flash the file.
4. Get [Vial](https://get.vial.today).
5. Enjoy!






