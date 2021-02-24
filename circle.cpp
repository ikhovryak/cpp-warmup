#include "circle.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h> 

using namespace std;
Circle::Circle()
{
	radius = 0.0f;
}

Circle::Circle(float r)
{
	radius = r;
}

float Circle::getRadius() //default constructor that sets radius to 0
{
	return radius;
}
void Circle::setRadius(float r) //constructor taking a radius as argument
{
	radius = r;
}

Circle::Circle(const Circle& circle) // copy constructor
{
	radius = circle.radius;
}
Circle::~Circle() // destructor
{

}
Circle& Circle::operator=(const Circle& circle)  // assignment operator
{
	radius = circle.radius;
	return *this;
}
std::ostream& operator<<(std::ostream& os, const Circle& circle) //output stream operator
{
	os << circle.radius;
	return os;
}
Circle operator+(const Circle& c1, const Circle& c2) //add operator (should add the radii of two circles together)
{
	float new_rad = c1.radius + c2.radius;
	Circle c(new_rad);
	return c;
}

float Circle::computeArea() { //method for computing and returning the area
	return pow(radius, 2) * M_PI;
}