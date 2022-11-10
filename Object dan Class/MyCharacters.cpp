#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "XenomorphBody.h"

using namespace std;

// declaration

string Xenomorph::getColor()
{
	return color;
}

/*void Xenomorph::setColor(int new_color)
{
	int random;
	random = rand() % new_color;
	switch (random)
	{
	case 0:
		color = "hijau";
		break;
	case 1:
		color = "mera";
		break;
	case 2:
		color = "kunigg";
		break;

	default:
		break;
	}
}*/

void Xenomorph::setColor(string new_color)
{
	color = new_color;
}

int Xenomorph::getLegs()
{
	return legs;
}

void Xenomorph::setLegs(int new_legs)
{

	legs = rand() % new_legs;
}

int Xenomorph::getEyes()
{
	return eyes;
}

void Xenomorph::setEyes(int new_eyes)
{
	eyes = rand() % new_eyes;
}

int Xenomorph::getAge()
{
	return age;
}

void Xenomorph::setAge(int new_age)
{
	age = rand() % new_age;
}

void Xenomorph::DisplayXenomorph()
{
	cout << "Age: " << getAge() << endl;
	cout << "Legs: " << getLegs() << endl;
	cout << "Eyes: " << getEyes() << endl;
	cout << "Color: " << getColor() << endl;
}

// main
int main()
{
	srand((unsigned)time(NULL));
	// first Xenomorph
	cout << "Creating a new Xenomorph 'first'" << endl;
	Xenomorph first;
	cout << "Setting first Xenomorph color." << endl;
	first.setColor("Hijo");
	cout << "Setting first Xenomorph age." << endl;
	first.setAge(100);
	cout << "Setting first Xenomorph legs." << endl;
	first.setLegs(12);
	cout << "Setting first Xenomorph eyes." << endl;
	first.setEyes(10);

	// spacing
	cout << endl;

	// second Xenomorph
	cout << "Creating a new Xenomorph 'second'" << endl;
	Xenomorph second;
	cout << "Setting second Xenomorph color." << endl;
	second.setColor("sajadui");
	cout << "Setting second Xenomorph age." << endl;
	second.setAge(100);
	cout << "Setting second Xenomorph legs." << endl;
	second.setLegs(12);
	cout << "Setting second Xenomorph eyes." << endl;
	second.setEyes(10);

	// spacing
	cout << endl;

	// printing information
	cout << " First Xenomorph information:" << endl;
	first.DisplayXenomorph();
	// spacing
	cout << endl;

	// printing information
	cout << " Second Xenomorph information:" << endl;
	second.DisplayXenomorph();
}