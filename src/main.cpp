#include <Arduino.h>

//Deklarasi Pin LED
//Mendeklarasikan variabel kontanta integer untuk menyimpan nomor pin LED

const int ledMerah = 8;
const int ledKuning = 9;
const int ledHijau = 10;

void setup() {
// Mengatur Pin-pin yabg dihubungkan ke LED sebagai output.
// Hal ini berarti Pin-pin tersebaut dapat digunakan untuk mengendalikan LED
  pinMode( ledMerah, OUTPUT);
  pinMode( ledKuning, OUTPUT);
  pinMode( ledHijau, OUTPUT);
}

void loop() {
// LED Merah 
// Menyalakan LED Merah selama 5 detik, kemudian mematikannya
digitalWrite( ledMerah, HIGH);
delay(5000);
digitalWrite( ledMerah, LOW);

// LED Kuning 
// Menyalakan LED Kuning selama 1 detik, kemudian mematikannya
digitalWrite( ledKuning, HIGH);
delay(1000);
digitalWrite( ledKuning, LOW);

// LED Hijau
// Menyalakan LED Hijau selama 5 detik, kemudian mematikannya
digitalWrite( ledHijau, HIGH);
delay(5000);
digitalWrite( ledHijau, LOW);

// LED Kuning 
// Menyalakan LED Kuning selama 1 detik, kemudian mematikannya
digitalWrite( ledKuning, HIGH);
delay(1000);
digitalWrite( ledKuning, LOW);
}
