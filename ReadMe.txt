
SPICE VENDING MACHINE
___________________________

Tools required:
1. Arduino Uno
2. Breadboard
3. Jumper Cable
4. Stepper motor with ULN2003 driver
5. 10k ohm resistor
6. Push button (3)
7. 9v battery
8. 3D printed components
9. 1kg load cell
10. HX 711 Analogue to Digital Converter 
11. 16x2 i2c LCD

Steps to make a spice vending machine:
1. Make a casing box from cardboard and make a hole for the push button, 
LCD and spice dispenser. The size can be adjusted according to your needs.

2. Arrange the electronic components according to the circuit on the schematic.
Push button 1 (a pinch) connected to digital pin 2
Push button 2 (tea spoon) is connected to digital pin 3
Push button 3 (table spoon) is connected to digital pin 4.
Motor driver connected to digital pin 8,9,10,11
LCD i2c SDA pin connected to analogue pin 4
SCK pin of LCD i2c is connected to analogue pin 5
HX711 DT pin is connected to digital pin 5
HX711 SCK pin connected with digital pin 6
pin E+ HX711 connected with red wire laod cell
pin E- HX711 is connected to the black wire of the laod cell
pin A- HX711 is connected to the white wire of the laod cell
pin A+ HX711 is connected to the green wire of the laod cell

3. Type the arduino coding in IDE and upload it to the arduino board

4. Spice vending machine is ready to run


