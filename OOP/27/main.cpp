#include <iostream>
#include "Point.cpp"

using namespace std;

int main() {
	Point p1(1.5, 6.7);
    cout << p1.getX() << endl;
    cout << p1.getY() << endl;
	Point p2(2.8, 3.2);

	cout << p1.distance(p2) << endl;
	cout << p1.distance(2.34, 7.8) << endl;
	return 0;
}