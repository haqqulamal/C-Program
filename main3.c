#include <stdio.h>

int main() {
    float nilai_akhir;
    char huruf_mutu;
    char nama[50] = "ANDINI YUANNITA SARI";
    char nim[20] = "D22.2023.03674";

    printf("Masukkan nilai akhir (0-100): ");
    scanf("%f", &nilai_akhir);

    if (nilai_akhir >= 85)
        huruf_mutu = 'A';
    else if (nilai_akhir >= 80)
        huruf_mutu = 'B';
    else if (nilai_akhir >= 70)
        huruf_mutu = 'C';
    else if (nilai_akhir >= 65)
        huruf_mutu = 'D';
    else if (nilai_akhir >= 60)
        huruf_mutu = 'E';
    else
        huruf_mutu = 'F';

    printf("NIM: %s\n", nim);
    printf("Nama: %s\n", nama);
    printf("Huruf mutu: %c\n", huruf_mutu);

    return 0;
}

