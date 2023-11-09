#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define NUM_LEVELS 9

// Array level kekeruhan air
int kekeruhan_air[NUM_LEVELS] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk mengatur motor listrik utama
void putar_motor_utama(int kecepatan, int waktu) {
    printf("Motor utama berputar dengan kecepatan %d rpm selama %d menit\n", kecepatan, waktu);
    sleep(waktu * 60);
    printf("Motor utama berhenti\n");
}

// Fungsi untuk mengatur motor pembuka dan penutup klep air
void kontrol_klep_air(int waktu) {
    printf("Motor pembuka klep pengisian air aktif selama %d menit\n", waktu);
    sleep(waktu * 60);
    printf("Klep pengisian air terbuka\n");
}

// Fungsi untuk mendeteksi level kekeruhan air
int deteksi_kekeruhan_air() {
    // Simulasi sensor turbidimeter
    return kekeruhan_air[rand() % NUM_LEVELS];
}

int main() {
    srand(time(NULL));

    // Tombol start ditekan
    printf("Tombol start ditekan\n");

    // Motor pembuka klep pengisian air aktif selama 2 menit
    kontrol_klep_air(2);

    // Sensor turbidimeter aktif satu kali
    int level_rata_rata = deteksi_kekeruhan_air();
    printf("Level rata-rata kekeruhan air: %d\n", level_rata_rata);

    // Motor listrik utama berputar sesuai level kekeruhan air = level rata-rata kekeruhan air
    putar_motor_utama(1000, 60);

    // Motor pembuka klep pembuangan air kotor aktif selama 2 menit
    kontrol_klep_air(2);

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    putar_motor_utama(2000, 3);

    // Motor pembuka klep pengisian air aktif selama 2 menit
    kontrol_klep_air(2);

    // Motor listrik utama berputar selama sisa waktu mencuci
    putar_motor_utama(1000, 60);

    // Motor pembuka klep pembuangan air kotor aktif selama 2 menit
    kontrol_klep_air(2);

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    putar_motor_utama(2000, 3);

    printf("Proses cuci selesai\n");

    return 0;
}
