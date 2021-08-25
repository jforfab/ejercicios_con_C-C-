//Factorial de un numero

#include <stdio.h>

main(){
	int i, numero, factorial=1;
	printf("Escriba un numero entro para calcular su factorial:");
	scanf("%d", &numero);
	for(i=numero;i>1;i--)
	factorial *=i;
	printf("%d!= %d", factorial, numero);
}
