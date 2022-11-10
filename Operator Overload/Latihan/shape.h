#pragma once
#include <iostream>
#include <ostream>

class Shape
{
	// friend ?? 
	// overload opertor insertion <<
	friend std::ostream &operator<< (std::ostream&, const Shape&);
	// overload opertor extraction >>
	friend std::istream& operator>> (std::istream&, Shape&);

private:
	int ukuran;
public:
	Shape(int);		
	Shape /*Shape*/ operator+ (Shape);
	int /*Shape*/ operator+ (int);
	double /*Shape*/ operator+ (double);
	bool /*Shape*/ operator> (Shape);
	double /*Shape*/ operator* (Shape);

	Shape /*Shape*/ operator+= (Shape);
	Shape /*Shape*/ &operator++ ();  // prefix
	Shape /*Shape*/ operator++ (int);  // postfix


};