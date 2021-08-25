// Calculo del menor de dos numeros dados
// segunda opcion
#include <stdio.h>

main(){
	int menor, numero1, numero2;
	printf("Escriba el primer numero y escriba INTRO\t");
	scanf("%d", &numero1);
	printf("Escriba el segundo numero y escriba INTRO\t");
	scanf("%d", &numero2);
	
	menor=numero1< numero2 ? numero1 : numero2;
	
	printf(" el menor entre numero1 %d y numero2 %d, es menor %d", numero1, numero2, menor);
}
