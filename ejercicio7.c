//Area de un triangulo rectangulo 

#include <stdio.h>

main(){
	float altura, base;
	double area;
	printf("\n altura del triangulo =");
	scanf("%f", &altura);
	printf("\n base del triangulo =");
	scanf("%f", &base);
	area= 0.5*(double) base * altura;
	printf("\n Area del triangulo %g\n", area);
}
