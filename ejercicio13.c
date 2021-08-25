//tabla ASCII

#include <stdio.h>
#define INI 33
#define FIL 15
#define COL 20

main(){
	int k, kk, i;
	for (k=1; i<FIL;k++){
		if(k==1) printf("\t\t\t\t Tabla ASCII\n\n");
		else printf("\n");
		for (i=1;i<=COL; i++){
			kk=INI+(k-1)*COL+i;
			if (kk>255) break;
			printf("%c\t", kk);
			
		}
		printf("\n");
		for (i=1;i<=COL; i++){
			kk=INI+(k-1)*COL+i;
			if (kk>255) return(1);
			if (kk< 100) printf("\t%d", kk);
			
		}
	}
}
