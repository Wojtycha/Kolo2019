#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string liczba;
	int sum=0;
	cin >> liczba;

	for(int i=1; i<=3; i++)
	{
		cout << sum << endl;
		cout << liczba[liczba.length() - i] << endl;
		sum += (liczba[liczba.length() - i]-48) * (liczba[liczba.length() - i]-48);
		if (i == 3)
		{
			sum *= 3;
		}
	}

	cout << sum;
	/*for (int i = 100; i < 1000; i++)
	{
		
	}
	*/
}
