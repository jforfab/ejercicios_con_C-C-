//imprime la tabla de las cuatro primeras potencias del 1 al 10

#include <stdio.h>

main(){
	int n;
	puts("numero\t exp2\t exp3\t exp4");
	puts("-----\t-----\t-----\t-----");
	for(n=0;n<=10;n++)
	printf("%2d \t %5d \t %5d \t %5d \t\n", n,n*n, n*n*n,n*n*n*n);
}
