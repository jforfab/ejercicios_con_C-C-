#include <stdio.h>
class Punto{
	int _x, _y;
	public:     //Principio de declaracion de interface
	void setX(const int val);
	void setY(const int val);
	int getX(){return _x;}
	int getY(){return _y;}
};

//printf("objeto apunto", apunto.getX(), apunto.getY())  ;
void Punto::setX(const int val){
	_x=val;
}
void Punto::setY(const int val){
	_y=val;
}
int main(){
	Punto apunto; // declaracion de objeto apunto	
	apunto.setX(1); // inicializacion
	apunto.setY(1);
	int x = apunto.getX();
	//int y = apunto.getY();
	//printf(const "valor de x", x);
	//printf("objeto apunto\n", apunto.setX())  ;
	//printf("objeto apunto\n", apunto.setY());

}
