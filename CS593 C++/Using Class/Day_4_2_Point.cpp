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
	float getPx();
	float getPy();
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
float Point::getPx() {
	return x;
}
float Point::getPy() {
	return y;
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
	cout << " is " << distanceBetPoint(p1, p2);
	return 0;
}

float distanceBetPoint(Point p1, Point p2) {
	return sqrt(pow(p1.getPx() - p2.getPx(), 2) + pow(p1.getPy() - p2.getPy(), 2));
}