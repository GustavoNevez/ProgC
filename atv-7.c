#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0, num, soma = 0;
    float media;

    printf("Digite 10 numeros:\n");
    while(i < 10) {
        scanf("%d", &num);
        printf("Metade de %d: %.2f\n", num, num / 2.0);
        soma += num;
        i++;
    }

    media = soma / 10.0;
    printf("Media dos numeros lidos: %.2f\n", media);

    return 0;
}