# Hello Flipper Zero Canvas 
The simplest application for [Flipper Zero](https://flipperzero.one/) which writes to canvas (screen)
text "Hello" for 5 seconds.

## How to run ?

1. [Install ufbt](https://pypi.org/project/ufbt/).
2. Connect your Flipper Zero with USB-C cable to your machine.
2. Build and upload to Flipper Zero.
   ```shell
   ufbt launch
   ```
3. On Flipper Zero go to `Applications->Examples->Hello Canvas`.
4. You can see text "Hello" for 5 seconds, then application quits.

*Note:* 

This was built for following firmware:
```
Firmware: 0.98.2
Build date: 01-02-2024
```

## Links

* First tutorial I found and which I was completely confused with. Not because of author but because of my almost none knowledge of C and frequent changes in Flipper Zero APIs
    * https://github.com/DroomOne/Flipper-Plugin-Tutorial/blob/main/hello_world
* Second tutorial - part 1 helps me to understand very basics
    * https://instantiator.dev/post/flipper-zero-app-tutorial-01/
* Following tutorial helps me a lot to understand UI works in Flipper Zero: https://github.com/jamisonderek/flipper-zero-tutorials/wiki/User-Interface#view
* furi_delay_ms (Flipper Zero firmware sources) https://github.com/flipperdevices/flipperzero-firmware/blob/e6f078eeb758992aef0edaf94a23eac846ca8746/furi/core/kernel.h#L114
 