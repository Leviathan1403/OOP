#include <string.h>
#pragma once

class Xenomorph {
private:
	string color;
	int legs;
	int eyes;
	int age;

public:
	string getColor();
	//void setColor(int);
	void setColor(string);
	int getLegs();
	void setLegs(int);
	int getEyes();
	void setEyes(int);
	int getAge();
	void setAge(int);
	void DisplayXenomorph();
};