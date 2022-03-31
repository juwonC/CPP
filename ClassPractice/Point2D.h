#pragma once

class Point2D
{
	int mX;
	int mY;

public:
	Point2D()
	{
	}

	Point2D(int x, int y)
	{
		mX = x;
		mY = y;
	}

	int GetX();
	int GetY();
	void SetCoordinate(int x, int y);
	int GetDistancefromStartingPoint();
	void PrintCoordinate();
};

