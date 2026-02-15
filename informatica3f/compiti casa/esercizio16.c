#include <stdio.h>

int main() {
    int N;
    int tessera, tesseraMin;
    float spesa, minSpesa, incasso = 0;

    printf("Inserisci numero clienti: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Inserisci numero tessera: ");
        scanf("%d", &tessera);

        printf("Inserisci spesa: ");
        scanf("%f", &spesa);

        incasso += spesa;

        if (i == 0 || spesa < minSpesa) {
            minSpesa = spesa;
            tesseraMin = tessera;
        }
    }

    printf("Incasso totale: %.2f\n", incasso);
    printf("Tessera con spesa minore: %d\n", tesseraMin);

    return 0;
}