//Ejemplo de variable golbal, local y argumento de funcion

#include <stdio.h>
 int vglobal=100; // Se ve en todo el fichero y debe ir con extern dentro
                      //de la declaracion de funciones
void suma1(int x);
void suma2(int x);

main (){
	extern int vglobal;
	int vlocal=200;
	printf("\n La variable vglobal en main vale= %d\n",vglobal);
	printf("\n La variable vlocal en main vale= %d\n",vlocal);
	suma1(vlocal);
	// en salida no se ha modificado su valor pese a que en suma1 se hagan operaciones con
	//vlocal argumento
	printf("\n La variable vglobal despues de la suma1 vale= %d\n",vglobal);
	printf("\n la variable local despues de la suma1 vale: %d", vlocal);
	
	suma2(vlocal);
	
	printf("\n La variable vglobal despues de la suma2 vale= %d\n",vglobal);
	printf("\n la variable local despues de la suma2 vale: %d", vlocal);
}
void suma1(int x){
	extern int vglobal;
	++x;
	++vglobal;
	printf("\n La variable vglobal dentro de suma1 vale= %d\n",vglobal);
	printf("\n EL argumento de (vlocal)  dentro de suma1 vale= %d\n",x);
	return;
}
void suma2(int x){
	extern int vglobal;
	++x;
	++vglobal;
	printf("\n La variable vglobal dentro de suma2 vale= %d\n",vglobal);
	printf("\n EL argumento de (vlocal)  dentro de suma2 vale= %d\n",x);
	return;
}
