#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero, resto;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	if (resto == 0){
		printf("%d eh par.\n", numero);
	}else{
		printf("%d eh impar.\n", numero);
	}
	
	return 0;
}