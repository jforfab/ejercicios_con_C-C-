#include <iostream>

float v;

int main() 
{
	int v=7;
	::v=10.5;
	std::cout << "variable local v=" << v << "\n";
	std::cout << "variable global v= " << ::v << "\n";
	return 0;
}
