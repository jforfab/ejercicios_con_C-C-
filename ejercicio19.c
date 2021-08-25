//Mensaje rodeado por un borde

#include <stdio.h>
#define ANCHO 77
#define FILAS 4

void linea();
void lados();

main(){
	printf("\n\n\n\n");
	linea();
	lados();
	printf("   *\t\t\t\t Bienvenido a C \t\t\t\t*\n");
	linea();
	lados();
	printf("\n\n\n\n");
}
void linea(){
	int x;
	printf("     ");
	for(x=0; x<=ANCHO;++x);
	putchar('\n');
}
void lados(){
	int y;
	for(y=0; y<=FILAS; ++y) printf("*\t\t\t\t\t\t\t\t\t\t*\n");
}
