#pragma once

class Coordinates;

#include <vector>
#include <iostream>
#include <string>

using namespace std;


class Grid
{
	friend ostream& operator <<(ostream &output, const Grid &rightObj);

	private:
		Coordinates* robotCoordinates;
		Coordinates* treasureCoordinates;

		vector<string> paths;
		void tripPlanner(const int currentX, const int currentY, const string steps);


	public:
		Grid();
		Grid(int startX, int startY, int treasureX, int treasureY);
		~Grid();
};

