#include <iostream>

using namespace std;

class Carpet
{
private:
    int length;
    int width;
    double price;
    void setPrice();

public:
    int getLength;
    int getWidth;
    double getPrice;
    void setLenght(int);
    void setwidth(int);
};

int Carpet::getLength()
{
    return length;
}
int Carpet::getWidth()
{
    return width;
}
double Carpet::getPrice()
{
    return price;
}
void Carpet::setLenght(int len)
{
    length = len;
    setPrice();
}
void Carpet::setwidth(int wid)
{
    width = wid;
    setPrice();
}