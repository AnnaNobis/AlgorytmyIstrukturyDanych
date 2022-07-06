// ZadanieFibonacii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Fibonacci
{

public:
    int generate(int n)
    {
        if (n <= 2)
        {
            return 1;
        }
        else
        {
            return generate(n - 2) + generate(n - 1);
        }
    }

};


int main()
{
    Fibonacci fib;

    std::cout << fib.generate(5)<< std::endl;
    std::cout << fib.generate(20)<< std::endl;

   //PODEJSCIE ITERACYJNE - zaczynamy od 0,1 i tak dalej do góry
  
   int a = 0;
    int b = 1;
   int sum = 0;
  int n = 20 ;
   for (int i = 1; i <n ; i++)
   {
     
       sum = a + b;
       a = b;
       b = sum;
   sum++;
  }
  std::cout << "Wartosc to: " << sum << std::endl;
}
