// ZadanieAlgorytmEuklidesa.cpp : Wybieramy wi�ksz� z dw�ch liczb i zamieniamy j� na r�nic� wi�kszej i mniejszej. 
//Czynno�� t� powtarzamy do momentu uzyskania dw�ch takich samych warto�ci.
//ZADANIE DO DOMU DLA CH�TNYCH

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
	std::cout << "Najwi�kszy wsp�lny dzielnik to: " << NWD(a,b) << std::endl;

	return 0;
}

