#define pirPin 2 // deklarasi pin dari pir yang diberi nama variabel pirPin
#define ledPin 3 // deklarasi pin led yang dihubungkan ke pin 3 dan diberi nama variabel ledPin
int statusPir = LOW; // deklarasi kondisi dari sensor pir apakah high atau low
int gerakanPir; // deklarasi variabel untuk pembacaan pir sensor

void setup() {
  pinMode(pirPin, INPUT); // set pirPin menjadi pin input
  pinMode(ledPin, OUTPUT); // set ledPin menjadi pin output
  Serial.begin(9600); // memulai komunikasi serial ke serial monitor dengan baud rate 9600
}

void loop() {
  gerakanPir = digitalRead(pirPin); // membaca sinyal dari pir ketika ada gerakan
  if (gerakanPir == HIGH) { // mengecek kondisi pir, jika mendeteksi gerakan maka skrip di bawah if akan dieksekusi
    digitalWrite(ledPin, HIGH); // menyalakan led ketika terdapat gerakan
    Serial.println("Lampu Menyala 30 Detik!!!"); // menampilkan peringatan ke serial monitor bahwa gerakan terdeteksi
    delay(30000); // menunda program selama 30 detik
    digitalWrite(ledPin, LOW); // matikan led setelah 30 detik
    Serial.println("Lampu Mati!!"); // menampilkan peringatan bahwa lampu mati
  }
}
