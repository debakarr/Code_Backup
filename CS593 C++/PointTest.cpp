#include<iostream>
#include<math.h>

using namespace std;

class Point
{
	float x, y;
public:
	Point(float, float);
	~Point();
	void displayPoint();
	static float distanceBetPoint(Point, Point);
};

Point::Point(float x, float y) {
	this->x = x;
	this->y = y;
	cout<<"\nObject created with value "<<x<<" and "<<y<<endl;
}
Point::~Point(){
	cout<<"\nObject Destroyed.";
}
void Point::displayPoint() {
	cout << "Point(" << x << ", " << y << ")";
}

float Point::distanceBetPoint(Point p1, Point p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

float distanceBetPoint(Point, Point);

int main()
{
	Point p1(2.5, 4.0);
	Point p2(4.2, 5.8);
	cout << "\nDistance between: ";
	p1.displayPoint();
	cout << " and ";
	p2.displayPoint();
	cout << " is " << Point::distanceBetPoint(p1, p2);
	return 0;
}
