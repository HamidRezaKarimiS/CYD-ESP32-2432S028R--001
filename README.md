base on common library for CYD (ESP32-2432S028R), i do some changes and use SOFTSPI for touch.
as you know, in CYD, Touch sensor is available on uncommon esp32 spi bus (39-MISO,32-MOSI,25-SCK,33-CS).
So you need to use SoftSPI Lib. In my example, i use PIO.
i share it and hope it be useful.
