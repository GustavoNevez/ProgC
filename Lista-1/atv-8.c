#include <stdio.h>
#include <stdlib.h>

int main() {
    int inicio, fim, i;

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    printf("Polegadas\tCentimetros\n");

    i = inicio;
    do {
        float cm = i * 2.54;
        printf("%d\t\t%.2f\n", i, cm);
        i++;
    } while (i <= fim);

    return 0;
}