#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Car
{
protected:
    bool isIgnitionOn;
    int speed;
    int noplat;
    int jarak;

public:
    void turnIgnitionOn();
    void turnIgnitionOff();
    void setSpeed(int);
    void showCar();
    int getplat();
    void setplat(int);
    int getjarak();
    void setjarak(int);
};

// a,b
int Car::getplat()
{
    return noplat;
}
void Car::setplat(int nomor)
{
    noplat = nomor;
}
int Car::getjarak()
{
    return jarak;
}
void Car::setjarak(const int distance)
{
    if (isIgnitionOn)
    {
        if (jarak <= distance)
        {
            jarak += speed;
        }
        else
        {
            jarak = distance;
        }
    }
    else
    {
        cout<<"kendaraan tak nyala"<<endl;
    }
}

void Car::showCar()
{
    // c
    cout << "nomor identifikasi = " << getplat() << endl;
    cout << "jarak = " << getjarak() << endl;
    if (isIgnitionOn)
        cout << "Ignition is on. ";
    else
        cout << "Ignition is off. ";
    cout << "Speed is " << speed << endl;
}

void Car::turnIgnitionOn()
{
    isIgnitionOn = true;
    jarak = 0;
}
void Car::turnIgnitionOff()
{
    speed = 0;
    isIgnitionOn = false;
}

void Car::setSpeed(int mph)
{
    const int STD_LIMIT = 200;
    if (isIgnitionOn)
        if (mph <= STD_LIMIT)
            speed = mph;
        else
            speed = STD_LIMIT;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}
class RaceCar : public Car
{
public:
    void setSpeed(int mph);
};
void RaceCar::setSpeed(int mph)
{
    const int MAX_SPEED = 200;
    if (isIgnitionOn)
        if (mph <= MAX_SPEED)
            speed = mph;
        else
            speed = MAX_SPEED;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}
int main()
{
    srand((unsigned) time(NULL));


    Car aCar;
    RaceCar aRaceCar;
    int Carspeed = 210;
    const int Car_distance = 500;
    
    aCar.setplat(2068);
    aCar.turnIgnitionOn();
    Carspeed=rand()%200;
    aCar.setSpeed(Carspeed);
    aCar.setjarak(Car_distance);
    aCar.showCar();

    
    aRaceCar.setplat(2068);
    aRaceCar.turnIgnitionOn();
    Carspeed=rand()%200;
    aRaceCar.setSpeed(Carspeed);
    aRaceCar.setjarak(Car_distance);
    aRaceCar.showCar();


    cout<<"\n"<<endl;
    if(aCar.getjarak()>aRaceCar.getjarak())
    {
        cout<<"a car menang"<<endl;
    }
    else{
        cout<<"race car menang"<<endl;
    }
     return 0;
}