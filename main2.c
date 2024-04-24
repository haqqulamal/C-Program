#include <stdio.h>

int main() {
    float jarak, konsumsi_bbm, harga_perliter, total_biaya;

    // Input jarak ke kampus dalam kilometer
    printf("Masukkan jarak ke kampus (km): ");
    scanf("%f", &jarak);

    // Konsumsi BBM kendaraan mahasiswa dalam KM/Liter
    konsumsi_bbm = 27.0;  // Misalkan 27 KM/Liter

    // Harga per liter BBM RON 92
    harga_perliter = 13300.0;  // Dalam Rupiah

    // Menghitung total biaya BBM
    total_biaya = (jarak / konsumsi_bbm) * harga_perliter * 2;  // 2 karena pergi dan pulang

    // Menampilkan total biaya BBM
    printf("Total biaya BBM yang dikeluarkan: Rp%.2f\n", total_biaya);

    return 0;
}

