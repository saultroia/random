#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, b, c;
	printf("\n");
	
	for(c = 0; c <= 1; c++){
		printf("\n");
		for(a = 1; a < 5; a++);
			printf("\n\n");
		
		for(a = 1; a <= 10; a++){
			for(b = 1+5*c; b <= 5+4*c; b++)
			printf("%3d x%3d = %3d  ", b, a, b * a);
			printf("\n\n");
		}
	}
	
	system("pause");
	return 0;
}
