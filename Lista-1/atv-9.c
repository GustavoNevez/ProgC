#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50], sexo;
    int idade, i;

    for (i = 1; i <= 20; i++) {
        printf("Digite o nome da pessoa %d: ", i);
        scanf("%s", nome);

        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Digite o sexo da pessoa %d (M/F): ", i);
        scanf(" %c", &sexo);

        if (sexo == 'M' && idade > 21) {
            printf("Nome: %s\n", nome);
        } else {
            printf("Essa pessoa nao atende aos requisitos.\n");
        }
    }

    return 0;
}