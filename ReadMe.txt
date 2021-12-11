
SPICE VENDING MACHINE
___________________________

Alat alat yang dibutuhkan:
1. Arduino Uno
2. Breadboard
3. Kabel Jumper
4. Stepper motor dengan ULN2003 driver
5. Resistor 10k ohm
6. Push button (3)
7. Baterai 9v
8. Komponen yang sudah di 3D print
9. Load cell 1kg
10. HX 711 Analog to Digital Converter 
11. LCD 16x2 i2c

Langkah langkah membuat spice vending machine:
1. Membuat kotak casing dari kardus dan beri lobang untuk push button, 
LCD dan dispenser spice. Ukuran bisa menyesuaikan kebutuhan masing masing.

2. Menyusun kompoenen elektronik sesuai rangkaian pada skematik.
Push button 1 (a pinch) terhubung dengan pin digital 2
Push button 2 (tea spoon) terhubung dengan pin digital 3
Push button 3 (table spoon) terhubung dengan pin digital 4
Driver motor terhubung dengan pin digital 8.9.10.11
pin SDA LCD i2c terhubung dengan pin analog 4
pin SCK LCD i2c terhubung dengan pin analog 5
pin DT HX711 terhubung dengan pin digital 5
pin SCK HX711 terhubung dengan pin digital 6
pin E+ HX711 terhubung dengan kabel merah laod cell
pin E- HX711 terhubung dengan kabel hitam laod cell
pin A- HX711 terhubung dengan kabel putih laod cell
pin A+ HX711 terhubung dengan kabel hijau laod cell

3. Mengetik coding arduino dalam IDE dan upload ke arduino board
4. Spice vending machine siap dijalankan


