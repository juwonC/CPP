#pragma once

class Point2D
{
	int mX;
	int mY;

public:
	int GetX();
	int GetY();
	void SetCoordinate(int x, int y);
	int GetDistancefromStartingPoint(int x, int y);
	void PrintCoordinate();
};

