#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define NUM_LEVELS 9

int kekeruhan_air[NUM_LEVELS] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

void putar_motor_utama(int kecepatan, int waktu) {
    printf("Motor utama berputar dengan kecepatan %d rpm selama %d menit\n", kecepatan, waktu);
    sleep(1); 
    printf("Motor utama berhenti\n");
}

void kontrol_klep_air(int waktu) {
    printf("Motor pembuka klep pengisian air aktif selama %d detik\n", waktu);
    sleep(1); 
    printf("Klep pengisian air terbuka\n");
}

int deteksi_kekeruhan_air() {
    return kekeruhan_air[rand() % NUM_LEVELS];
}

int main() {
    srand(time(NULL));

    printf("Tombol start ditekan\n");

    kontrol_klep_air(1); 

    int level_rata_rata = deteksi_kekeruhan_air();
    printf("Level rata-rata kekeruhan air: %d\n", level_rata_rata);

    putar_motor_utama(1000, 2); 

    kontrol_klep_air(1); 

    putar_motor_utama(2000, 1); 

    kontrol_klep_air(1); 

    putar_motor_utama(1000, 2);

    kontrol_klep_air(1); 

    putar_motor_utama(2000, 1); 

    printf("Proses cuci selesai\n");

    return 0;
}
