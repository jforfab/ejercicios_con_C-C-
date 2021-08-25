//Programa que calcula el cuadrado de un numero mediante una macro
#include <stdio.h>
#define CUAD(x)(x*x) //definicion de macro

main(){
	float a;
	printf("Escriba un numero:");
	scanf("%f",a);
	printf("\n Su cuadrado es %f\n", CUAD(a));
}
//#undef CUAD
