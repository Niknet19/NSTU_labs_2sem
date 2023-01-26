#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "utils.h"

//Класс Круг
//Атрибуты: центр, радиус, цвет заливки, цвет обводки.
//Методы: по одному методу установки и получения значения на каждый атрибут,
//расчёта периметра, расчёта площади, перемещения на dx единиц по горизонтали и dy единиц по вертикали.
class Circle{
	Point center_;
	double radius_;
	Color fill_color_;
	Color outline_color_;
public:
	Circle(const Point &center, double radius, Color fillColor, Color outlineColor);
	void setCenter_(const Point &center);
	void setCenter_(double x,double y);
	void setRadius_(double radius);
	void setFill_color_(Color fillColor);
	void setOutline_color_(Color outlineColor);
	const Point &getCenter_() const;
	double getRadius_() const;
	Color getFill_color_() const;
	Color getOutline_color_() const;
};


#endif //CIRCLE_H
