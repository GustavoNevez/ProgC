#include <stdio.h>
#include <stdlib.h>

int main() {
	float numero;
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if (numero == 0){
		printf("O numero eh zero.\n");
	}else if(numero > 0){
	    printf("O numero eh positivo.\n");
	}else{
		printf("O numero eh negativo.\n");
	}
	return 0;
}