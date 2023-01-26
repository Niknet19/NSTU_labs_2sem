#include "Circle.h"
Circle::Circle(const Point &center, double radius, Color fillColor, Color outlineColor)
	: center_(center), radius_(radius), fill_color_(fillColor), outline_color_(outlineColor)
{}

Circle::Circle(const double centerx, const double centery, double radius, Color fillColor, Color outlineColor): center_(centerx,centery),radius_(radius),fill_color_(fillColor),outline_color_(outlineColor)
{}

void Circle::setCenter(const Point &center)
{
	center_ = center;
}

void Circle::setRadius(double radius)
{
	radius_ = radius;
}

void Circle::setFillColor(Color fillColor)
{
	fill_color_ = fillColor;
}

void Circle::setOutlineColor(Color outlineColor)
{
	outline_color_ = outlineColor;
}

void Circle::setCenter(double x,double y){
center_.x=x;
center_.y=y;
}
const Point &Circle::getCenter() const
{
	return center_;
}
double Circle::getRadius() const
{
	return radius_;
}
Color Circle::getFillColor() const
{
	return fill_color_;
}
Color Circle::getOutlineColor() const
{
	return outline_color_;
}
double Circle::circleArea() const
{
	return PI*radius_*radius_;
}
double Circle::circlePerimeter() const
{
	return 2*PI*radius_;
}
void Circle::moveX(double dx){
	center_.x+=dx;
}
void Circle::moveY(double dy)
{
center_.y+=dy;
}
std::ostream &operator<<(std::ostream &os, const Circle &circle)
{
	os << " center: " << circle.center_.x<<" "<<circle.center_.y << " radius: " << circle.radius_ << " fill_color: "
	   << circle.fill_color_ << " outline_color: " << circle.outline_color_;
	return os;
}
bool Circle::operator<(const Circle &rhs) const
{
	return radius_ < rhs.radius_;
}
bool Circle::operator>(const Circle &rhs) const
{
	return rhs.radius_ < radius_;
}
bool Circle::operator<=(const Circle &rhs) const
{
	return rhs.radius_ <= radius_;
}
bool Circle::operator>=(const Circle &rhs) const
{
	return radius_ <= rhs.radius_;
}
void Circle::moveXY(double x,double y)
{
center_.x+=x;
center_.y+=y;
}
Circle::Circle(): center_(0,0),fill_color_(WHITE),outline_color_(BLACK),radius_(1){}
bool Circle::operator==(const Circle &rhs) const
{
	return rhs.radius_==radius_;
}

