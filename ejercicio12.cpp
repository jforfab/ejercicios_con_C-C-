//Sistema de temperaturas

#include <stdio.h>

main(){
	int i;
	float c;
	for(i=0; i<=300;i+=20){
		c=(5./9)*(i-32);
		printf("%3d grados Farenheit equivalen a %4.4f grados celcius\n", i,c);
		
	}
	
}
