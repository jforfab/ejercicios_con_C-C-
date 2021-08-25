//Algoritmo de la burbuja 
//Ordenacion de vector

#include <stdio.h>
#define LIM 15

main(){
	int i=0, aux,j,  tamano;
	int lista[LIM];
	printf("longitud del vector a ordenar:");
	scanf("%d", &tamano);
	if (tamano>LIM){
		printf("El limite del vector se ha excedido");
		printf(", por favor cambie el limite en el codigo\n");
		return;

	}
	while (i<tamano){
		i++;
		printf("Numero %d:\t",i);
		scanf("%d", &lista[i-1]);
		
	}
	printf("el vector introducido es el siguiente:\n");
	for (i=0; i<tamano; i++) printf("%d,", lista[i]);
	for (i=0; i<tamano-1; i++){
		for(j=i+1; j< tamano; j++){
			if (lista[i]>lista[j]){
				aux=lista[i];
				lista[i]=lista[j];
				lista[j]=aux;
			}
		}
	}
	printf("\nEl vector ordenado es el siguiente:\n");
	for (i=0; i<tamano; i++) printf("%d,", lista[i]);
	printf("\n");
}
