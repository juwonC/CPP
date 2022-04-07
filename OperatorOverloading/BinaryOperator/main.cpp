#include <iostream>

class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D(int x, int y) : mX{ x }, mY{ y }
	{
	}

	Point2D operator+(const Point2D& rhs)
	{
		Point2D result{ 0, 0 };
		result.mX = this->mX + rhs.mX;
		result.mY = this->mY + rhs.mY;

		return result;
	}

	friend std::ostream& operator<<(std::ostream& os, const Point2D point);
};

std::ostream& operator<<(std::ostream& os, const Point2D point)
{
	os << "(" << point.mX << "," << point.mY << ")";
	return os;
}

int main()
{
	Point2D pt1{ 1, 1 }, pt2{ 2, 2 };
	std::cout << pt1 << std::endl;

	Point2D pt3 = pt1 + pt2;

	Point2D pt4 = pt3 + pt2 + pt1;
	std::cout << pt4 << std::endl;
}