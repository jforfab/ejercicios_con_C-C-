//Saludo con nombre y apellidos 
//utilizando get en lugar de scanf

#include <stdio.h>
void contestar(char []);
main(){
	char nombre[20];
	printf("Hola me llamo Iagoba, y tu?\n");
	gets(nombre);
	contestar(nombre);
}
void contestar(char *nombre){
	printf("Me alegro de conocerte %s\n", nombre);
}
