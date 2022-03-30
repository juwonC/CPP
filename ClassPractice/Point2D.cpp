#include <iostream>
#include <cmath>
#include "Point2D.h"


int Point2D::GetX(int x)
{
	return mX;
}

int Point2D::GetY(int y)
{
	return mY;
}

void Point2D::SetCoordinate(int x, int y)
{
	mX = x;
	mY = y;
}

int Point2D::GetDistancefromStartingPoint(int x, int y)
{
	int distance{};

	return distance = sqrt(pow(x, 2) + pow(y, 2));
}

void Point2D::PrintCoordinate()
{
	std::cout << "(" << mX << "," << mY << ")" << std::endl;
}
