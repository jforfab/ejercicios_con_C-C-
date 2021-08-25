//Usamos la funcion inline para calcular el volumen del cubo

#include <iostream.h>

inline float cubo(const float s){return s*s*s;}

main()
{
	cout <<"introduce la longitud de los lados de tu cubo:";
	float lado;
	cin >> lado;
	cout << "el volumen del cubo de lado"
	<< lado <<"es" << cubo (lado)<<'\n';
	
	return 0;
}
