#include <stdio.h>
#include <stdlib.h>

int main() {
	char letra;
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		printf("%c eh vogal", letra);
	}else{
		printf("%c eh consoante", letra);
	}
	
	return 0;
    
}