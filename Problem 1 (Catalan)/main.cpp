// Problem 1 (Catalan).cpp : Defines the entry point for the console application.
//

// Reza Naeemi

// #include "stdafx.h"
#include <stdlib.h>     //Need for g++ to know atoi
#include <iostream>

using namespace std;



long long int Catalan(long long int n)
{
	if (n <= 1)
		return 1;

	long long int result = 0;

	for (long long int i = 0; i < n; i++)
		result += Catalan(i) * Catalan(n - i - 1);

	return result;
}

void PrintConsoleEntry(int &n)
{
	cout << "Catalan " << n << " is " << Catalan(n) << "." << endl;
}

void PrintNegativeNumberMessage(int &input)
{
	while (input < 0)
	{
		cout << "A Negative Number was entered.\nPlease try again with a positive number: ";
		cin >> input;
	}
}

int main(int argc, char* argv[])
{

	if (argc == 2)
	{
			int input = atoi(argv[1]);

			if (input < 0)
				PrintNegativeNumberMessage(input);

			PrintConsoleEntry(input);
	}
	else if (argc > 2)
        cout << "Error: Too many arguments!" << endl;
	else
		cout << "Error: No argument(s) were passed in!" << endl;

	//system("pause");
	cin.get();
	return 0;
}
