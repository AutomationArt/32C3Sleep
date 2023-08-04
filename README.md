# 32C3Sleep for Automation.art
A framework for building your ESP32-c3 based projects. With battery charging and disconnection. 

#### Right away about bugs that were fixed in the scheme after the first prototype) 
!Resistors for the voltage divider should be taken 10kΩ and 39kΩ (R18 | R7), since the esp32c3 can measure 2.5V maximum

###  How does it work?
This board is designed to create projects in hibernation mode or with low power consumption and small size. Additional pins and JTAG are provided for this purpose. The TP4056 charging module discharges the battery in the same way as a self-discharging battery, and features a 3.3V LDO and an external quartz for more accurate timing.

### Main features
- Microcontroller with or without antenna
- Temperature sensor connection pins ds18b20
- Battery connection pins
- Reset button
- 1 indicator LEDs
- Ldo 3.3v

### Examples of use
- Sensor with low consumption and small size
- Any battery operated wifi/ble device
- ESP-NOW / WiFi-Mesh and other mesh technologies

### Current PCB release 
[![esp32c3_aelmaker](/Image/Screenshot_1.png "esp32c3_aelmaker")](/Image/Screenshot_1.png "esp32c3_aelmaker")  
[![esp32c3_aelmaker](/Image/Screenshot_2.png "esp32c3_aelmaker")](/Image/Screenshot_2.png "esp32c3_aelmaker")
[![esp32c3_aelmaker](/Image/Screenshot_3.png "esp32c3_aelmaker")](/Image/Screenshot_3.png "esp32c3_aelmaker")  

### Manufactured device 

[![esp32c3_aelmaker](/Image/esp32-c3(1).jpg "esp32c3_aelmaker")](/Image/esp32-c3(1).jpg "esp32c3_aelmaker")
[![esp32c3_aelmaker](/Image/esp32-c3(2).jpg "esp32c3_aelmaker")](/Image/esp32-c3(2).jpg "esp32c3_aelmaker")
[![esp32c3_aelmaker](/Image/esp32-c3(3).jpg "esp32c3_aelmaker")](/Image/esp32-c3(3).jpg "esp32c3_aelmaker")
[![esp32c3_aelmaker](/Image/esp32-c3(4).jpg "esp32c3_aelmaker")](/Image/esp32-c3(4).jpg "esp32c3_aelmaker")
[![esp32c3_aelmaker](/Image/esp32-c3(5).jpg "esp32c3_aelmaker")](/Image/esp32-c3(5).jpg "esp32c3_aelmaker")

### Case
The sample box for the board with 850mA battery is in the Case folder, the SKP model is there as well

### Specifications

| Name | Justification |
| ------------ | ------------ |
| ESP32-C3-WROOM-02U | This is a low-power, high-performance Wi-Fi and Bluetooth chip | 
| TP4056  | This is a battery charging controller that can be used to charge a variety of batteries, including LiPo, Li-Ion, and NiMH |
| AP2112K-3.3TRG1 | This is a buck converter that can be used to convert a higher voltage to a lower voltage.|
| 32.768K |  This is a crystal oscillator that can be used to generate a 32.768 kHz clock signal.  |
| LED0805 | This is an LED that is commonly used in electronic devices. 