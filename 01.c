#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float m, dm, cm, mm;
	
	printf("Informe o valor em metros: ");
	scanf("%f", &m);
	
	dm = m * 10;
	cm = m * 100;
	mm = m * 1000;
	
	printf("\n%.2f metros correspondem a %.2f decímetros.\n", m, dc);
	printf("\n%.2f metros correspondem a %.2f centímetros.\n", m, cm);
	printf("\n%.2f metros correspondem a %.2f milímetros.\n\n", m, mm);
	
	system("pause");
	return 0;
}
