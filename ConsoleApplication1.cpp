//#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		cout << i << endl;
		string liczba=to_string(i); // konwersja int->string
		int sum = 0;

		for (int j = 0; j <= 2; j++)
		{
			sum += (liczba[j] - 48) * (liczba[j] - 48); //kwadrat cyfry i.
			if (j == 2)
			{
				sum *= 3;
			}
		}
		if (sum == i)
			cout << liczba;
	}
}
