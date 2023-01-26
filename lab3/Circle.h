#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "utils.h"
#include <fstream>

//Класс Круг
//Атрибуты: центр, радиус, цвет заливки, цвет обводки.
//Методы: по одному методу установки и получения значения на каждый атрибут,
//расчёта периметра, расчёта площади, перемещения на dx единиц по горизонтали и dy единиц по вертикали.
class Circle{
	const double PI = 3.14159265;
	Point center_;
	double radius_;
	Color fill_color_;
	Color outline_color_;
public:
	Circle();
	Circle(const Point &center, double radius, Color fillColor, Color outlineColor);
	Circle(double centerx,double centery, double radius, Color fillColor, Color outlineColor);
	void setCenter(const Point &center);
	void setCenter(double x,double y);
	void setRadius(double radius);
	void setFillColor(Color fillColor);
	void setOutlineColor(Color outlineColor);
	const Point &getCenter() const;
	double getRadius() const;
	Color getFillColor() const;
	Color getOutlineColor() const;
	double circlePerimeter() const;
	double circleArea() const;
	void moveX(double dx);
	void moveY(double dy);
	void moveXY(double x,double y);
	friend std::ostream &operator<<(std::ostream &os, const Circle &circle);
	bool operator<(const Circle &rhs) const;
	bool operator>(const Circle &rhs) const;
	bool operator<=(const Circle &rhs) const;
	bool operator>=(const Circle &rhs) const;
};


#endif //CIRCLE_H
