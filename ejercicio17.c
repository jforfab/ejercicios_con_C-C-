//Saludo con funcion

#include <stdio.h>
void contestar(char []);
main(){
	char nombre[20];
	printf("Hola, me llamo ordenador, y tu? \n");
	scanf("%s", &nombre);
	contestar(nombre);
	
}
void contestar(char *nombre){
	printf("Me alegro de conocerte, %s\n", nombre);
}
