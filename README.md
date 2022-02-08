# Distance Measurement System using VL53L0X Laser Rangefinder 

This project involves design of LIDAR measurement system that can measure up to 50cm when button is pressed. Distance is shown in 2 seven segment displays. Concept of multiplexing is used, when two devices connected to the same I/O pins. These two devices are passed through with less speed but with more channels. To say it simply, loop switches back and forth between two devices which appears in real world as it is working at the same time. 

# Components 

- Arduino UNO 
- VL53L0X laser rangefinder breakout board 
- PNP switching transistor x 2 
- 1k resistor x 2 
- 8x220 Ohms resistor IC
- Seven segment display (common anode) x 2
- Pushbutton 
- Pulldown resistor (100kOhms)
- Breadboard (x 2)

