#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor, retorno = -1;
	char caractere;
	
	do{
		printf("\nDigite um valor para a conversão: ");
		retorno = scanf("%d", &valor);
		
		do{
			caractere = getchar();
		
		}while(caractere != '\n');
	
	}while(retorno == 0);
	
	printf("%d corresponde a %X no sistema de numeração Hexadecimal.\n", valor, valor);
	printf("%d corresponde a %o no sistema de numeração Octal.\n\n", valor, valor);

    system("pause");
	return 0;	
}
