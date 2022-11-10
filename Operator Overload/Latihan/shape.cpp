#include "Shape.h"

Shape::Shape(int ukuran)
{
	this->ukuran = ukuran;
}

Shape Shape::operator+(Shape other)
{
	Shape result(0);
	result.ukuran = ukuran + other.ukuran;
	return result;
}

int Shape::operator+(int nilai)
{
	return ukuran + nilai;
}

double Shape::operator+(double nilai)
{
	return ukuran + nilai;
}

bool Shape::operator>(Shape other)
{	
	return ukuran > other.ukuran;
}

double Shape::operator*(Shape other)
{
	return ukuran * other.ukuran;
}

Shape Shape::operator+=(Shape other)
{
	Shape result(0);
	result.ukuran = ukuran + other.ukuran;
	return result;
}

Shape &Shape::operator++()
{
	Shape result(0);
	result.ukuran = ++ukuran;
	return result;
}

Shape Shape::operator++(int)
{
	Shape result(0);
	result.ukuran = ukuran++;
	return result;
}

std::ostream &operator<<(std::ostream &out, const Shape &shape)
{
	out << "Ukuran shape adalah = " << shape.ukuran;
	return out;
}

std::istream& operator>>(std::istream& input, Shape& shape)
{
	std::cout << "Masukkan ukuran baru = ";
	input >> shape.ukuran;
	return input;
}