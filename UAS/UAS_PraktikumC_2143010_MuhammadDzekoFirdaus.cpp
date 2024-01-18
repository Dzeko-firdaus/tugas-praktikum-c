#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define NUM_LEVELS 9

int kekeruhan_air[NUM_LEVELS] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

void putar_motor_utama(int kecepatan, int waktu) {
    printf("Motor utama berputar dengan kecepatan %d rpm selama %d menit\n", kecepatan, waktu);
    sleep(waktu * 60);
    printf("Motor utama berhenti\n");
}

void kontrol_klep_air(int waktu) {
    printf("Motor pembuka klep pengisian air aktif selama %d menit\n", waktu);
    sleep(waktu * 60);
    printf("Klep pengisian air terbuka\n");
}

int deteksi_kekeruhan_air() {
    return kekeruhan_air[rand() % NUM_LEVELS];
}

void proses_cuci() {
    kontrol_klep_air(2);

    int level_rata_rata = deteksi_kekeruhan_air();
    printf("Level rata-rata kekeruhan air: %d\n", level_rata_rata);

    putar_motor_utama(1000, 60);

    kontrol_klep_air(2);

    putar_motor_utama(2000, 3);

    kontrol_klep_air(2);

    putar_motor_utama(1000, 60);

    kontrol_klep_air(2);

    putar_motor_utama(2000, 3);

    printf("Proses cuci selesai\n");
}

int main() {
    srand(time(NULL));

    printf("Tombol start ditekan\n");

    proses_cuci();

    return 0;
}
