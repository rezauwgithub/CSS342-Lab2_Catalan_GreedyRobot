// #include "stdafx.h"
#include "Grid.h"
#include "Coordinates.h"

Grid::Grid()
{
}

Grid::Grid(int startX, int startY, int treasureX, int treasureY)
{
	robotCoordinates = new Coordinates(startX, startY);
	treasureCoordinates = new Coordinates(treasureX, treasureY);

	tripPlanner(startX, startY, "");
}

Grid::~Grid()
{
	delete robotCoordinates;
	robotCoordinates = NULL;

	delete treasureCoordinates;
	treasureCoordinates = NULL;

}

void Grid::tripPlanner(const int currentX, const int currentY, const string steps)
{
	if (currentX == treasureCoordinates->getX() &&
		currentY == treasureCoordinates->getY())
	{
		paths.push_back(steps);
		return;
	}

	if (currentY < treasureCoordinates->getY())
		tripPlanner(currentX, currentY + 1, steps + "N");

	if (currentX < treasureCoordinates->getX())
		tripPlanner(currentX + 1, currentY, steps + "E");

	if (currentY > treasureCoordinates->getY())
		tripPlanner(currentX, currentY - 1, steps + "S");

	if (currentX > treasureCoordinates->getX())
		tripPlanner(currentX - 1, currentY, steps + "W");

}


ostream &operator <<(ostream &output, const Grid &rightObj)
{
	for (int i = 0; i < rightObj.paths.size(); i++)
		output << rightObj.paths[i] << endl;

	output << "Number of paths: " << rightObj.paths.size() << endl;

	return output;
}

