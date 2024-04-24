#include <stdio.h>

int main() {
    float total_belanja;
    float diskon;
    char bonus[20];

    printf("Masukkan total belanja (Rp): ");
    scanf("%f", &total_belanja);

    if (total_belanja > 2000000) {
        diskon = total_belanja * 0.3;
        strcpy(bonus, "Signature Brosch");
    } else if (total_belanja > 1500000 && total_belanja <= 2000000) {
        diskon = total_belanja * 0.25;
        strcpy(bonus, "Scarf");
    } else if (total_belanja > 1000000 && total_belanja <= 1500000) {
        diskon = total_belanja * 0.2;
        strcpy(bonus, "Voal Basic");
    } else if (total_belanja > 500000 && total_belanja <= 1000000) {
        diskon = total_belanja * 0.1;
        strcpy(bonus, "None");
    } else {
        diskon = 0;
        strcpy(bonus, "None");
    }

    printf("Diskon yang diterima: Rp %.2f\n", diskon);
    printf("Bonus yang diterima: %s\n", bonus);

    return 0;
}

