// Problem 2 (GreedyRobot).cpp : Defines the entry point for the console application.
//

// Reza Naeemi

// #include "stdafx.h"
#include "Grid.h"
#include <iostream>
using namespace std;

int main()
{

	int startX, startY, treasureX, treasureY;

	cout << "Enter coordinates for Start and Treasure\n(startX startY treasureX treasureY): ";
	cin >> startX >> startY >> treasureX >> treasureY;

	Grid* grid = new Grid(startX, startY, treasureX, treasureY);

	cout << *grid << endl;


    delete grid;
	grid = NULL;

    cin.get();
	//system("pause");
	return 0;
}

