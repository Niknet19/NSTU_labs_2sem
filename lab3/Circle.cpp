#include "Circle.h"
Circle::Circle(const Point &center, double radius, Color fillColor, Color outlineColor)
	: center_(center), radius_(radius), fill_color_(fillColor), outline_color_(outlineColor)
{}

void Circle::setCenter_(const Point &center)
{
	center_ = center;
}

void Circle::setRadius_(double radius)
{
	radius_ = radius;
}

void Circle::setFill_color_(Color fillColor)
{
	fill_color_ = fillColor;
}

void Circle::setOutline_color_(Color outlineColor)
{
	outline_color_ = outlineColor;
}

void Circle::setCenter_(double x,double y){
center_.x=x;
center_.y=y;
}
const Point &Circle::getCenter_() const
{
	return center_;
}
double Circle::getRadius_() const
{
	return radius_;
}
Color Circle::getFill_color_() const
{
	return fill_color_;
}
Color Circle::getOutline_color_() const
{
	return outline_color_;
}
