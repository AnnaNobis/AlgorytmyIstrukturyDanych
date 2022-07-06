// ZadanieAlgorytmEuklidesa.cpp : Wybieramy wiêksz¹ z dwóch liczb i zamieniamy j¹ na ró¿nicê wiêkszej i mniejszej. 
//Czynnoœæ t¹ powtarzamy do momentu uzyskania dwóch takich samych wartoœci.
//ZADANIE DO DOMU DLA CHÊTNYCH

#include <iostream>

int NWD(unsigned int a, unsigned int b)
{
	
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}

		else if (a < b)
		{
			b = b - a;
		}
		
	}return a;
}



int main()
{

	unsigned int a, b;
	std::cout << "Podaj 1sza liczbe:" << std::endl;
	std::cin >> a;
	std::cout << "Podaj 2ga liczbe:" << std::endl;
	std::cin >> b;
	std::cout << "Najwiêkszy wspólny dzielnik to: " << NWD(a,b) << std::endl;

	return 0;
}

