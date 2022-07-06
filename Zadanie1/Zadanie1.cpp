// Zadanie1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void readNumbers(int* tab, const unsigned int size)
{
	for (unsigned int i = 0; i < size; ++i)
	{
		std::cout << "Podaj " << i << "liczbê:";
		std::cin >> tab[i];
	}
}

int findMinimum(int* tab, const unsigned int size)
{
	int min = 0;
	if (size > 0 && tab != nullptr)
	{
		min = tab[0];

			int i = 1;
			
			while (i < size-1)
			{
				if (tab[i] < min)
				{
					min = tab[i];
				}
				++i;
			}	
	}
	return min;
}



int main()
{
	std::cout << "Ile liczb wczytac?" << std::endl;
	unsigned int numberCount = 0;
	std::cin >> numberCount;
	if (numberCount > 0)
	{
		int* tab = new int[numberCount];
		readNumbers(tab, numberCount);
		int min = findMinimum(tab, numberCount);
		std::cout << "Najmniejsza liczba to: " << min << std::endl;
		delete[] tab;

	}
}

//Fib(5) = Fib(3) + Fib(4);
//Fib(5) = Fib(1) + Fib(2) + Fib(3) + Fib(2);
//Fib(5) = 1 + 1 + Fib(1) + Fib(2) + Fib(2);
//Fib(5) = 1 + 1 + 1 + 1 + 1;
//Fib(5) = 5;
