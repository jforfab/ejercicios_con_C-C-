//Sistema de temperaturas

#include <stdio.h>

main(){
	int i;
	float c;
	for(i=0; i<=300;i+=20){
		c=(5./9)*(i-32);
		printf("%d grados Farenheit equivalen a %f grados celcius\n", i,c);
		
	}
	
}
