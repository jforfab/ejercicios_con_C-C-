#include <iostream>
#include <string.h>

inline void string_copy(char *copia, const char *original){
	strcpy(copia, original);
}
inline void string_copy(char *copia, const *original, const int *longitud){
	strncpy(copia, original, longitud);
}
static char string_a[20], string_b[20];

public void main() {
	string_copy(strig_a, "Aquello");
	string_copy(strig_b, "Esto es una cadena", 4);
	cout<< string_b<<"y"<<string_a;
}
