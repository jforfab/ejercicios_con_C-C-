// repetir un caracter un numero de veces
#include <stdio.h>
main(){
	char ch;
	int num_rep;
	printf("Escriba el caracter a repetir:\n");
	scanf("%c", &ch);
	printf("Escriba el numero de repeticiones:\n");
	scanf("%d", &num_rep);
	while (&num_rep>0){
		 ch =(int) num_rep *ch;
		
	}
	printf(" %c\n", ch);
}
