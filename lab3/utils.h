#ifndef UTILS_H
#define UTILS_H

enum Color
{
	RED, GREEN, BLUE, WHITE, BLACK,
};

struct Point {
	double x=0;
	double y=0;
	Point(double x, double y)
		: x(x), y(y)
	{}
	Point():x(0),y(0){};
};

#endif //UTILS_H
