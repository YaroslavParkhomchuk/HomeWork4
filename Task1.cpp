#include <iostream>
using namespace std;
class Point
{
public:
	Point(double _x, double _y):x(_x), y(_y) {}
	double getX() const { return x; }
	double getY() const { return y; }
	void setX(double _x) { x = _x; }
	void setY(double _y) { y = _y; }
	void print() const
	{
		cout << "X = " << x << " Y = " << y << endl;
	}
private:
	double x;
	double y;
};

int main()
{
	Point point(4, 6);
	point.print();
	return 0;
}
