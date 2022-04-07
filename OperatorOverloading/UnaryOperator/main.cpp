#include <iostream>

class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D() = default;

	Point2D(int x, int y) : mX{ x }, mY{ y }
	{
	}

	void Print()
	{
		std::cout << "(" << this->mX << ", " << this->mY << ")" << std::endl;
	}

	//const Point2D& operator++()
	//{
	//	++mX;
	//	++mY;

	//	return *this;
	//}

	//const Point2D& operator++(int value)
	//{
	//	Point2D temp{ mX, mY };

	//	++(*this);

	//	return temp;
	//}

	//Point2D& operator-()
	//{
	//	mX = -mX;
	//	mY = -mY;

	//	return *this;
	//}

	friend const Point2D& operator++(Point2D& point);
	friend const Point2D& operator++(Point2D& point, int value);
	friend Point2D& operator-(Point2D& point);
};

const Point2D& operator++(Point2D& point)
{
	++point.mX;
	++point.mY;
	
	return point;
}

const Point2D& operator++(Point2D& point, int value)
{
	Point2D temp(point.mX, point.mY);

	++(point);

	return temp;
}

Point2D& operator-(Point2D& point)
{
	point.mX = -point.mX;
	point.mY = -point.mY;

	return point;
}

int main()
{
	Point2D pt1{1, 1};
	pt1.Print();

	Point2D pt2 = ++pt1;
	pt2.Print();

	Point2D pt3 = pt1++;
	pt3.Print();

	-pt3;
	pt3.Print();
}