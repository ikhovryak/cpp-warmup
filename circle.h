// Name: Iryna Khovryak
// Date: Feb 23, 2021

#pragma once
#include <iostream>
class Circle
{
public:
	Circle(); //default constructor that sets radius to 0
	Circle(float radius); //constructor taking a radius as argument
	Circle(const Circle& circle); // copy constructor
	~Circle(); //destructor
	Circle& operator = (const Circle& circle);

	friend std::ostream& operator<<(std::ostream& os, const Circle& circle); //output stream operator
	friend Circle operator+(const Circle& c1, const Circle& c2); //(should add the radii of two circles together)

	void setRadius(float r); //mutator
	float getRadius(); //accessor
	float computeArea(); //method for computing and returning the area

protected:
	float radius;


};