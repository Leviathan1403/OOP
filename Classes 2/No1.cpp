#include <iostream>

using namespace std;

class fraction
{
private:
    int bilbulat;
    int pembilang;
    int penyebut;

public:
    int enterfractionValue();
    void displayfraction();
    void reducefraction();
    int getpembilang()
    {

        return pembilang;
    }

    int getbilbulat()
    {

        return pembilang;
    }
};

int fraction::enterfractionValue()
{

    cout << "\nMasukkan Bilangan bulat : ";

    cin >> bilbulat;

    cout << "\nMasukkan Pembilang : ";

    cin >> pembilang;

    cout << "\nMasukkan Penyebut : ";

    cin >> penyebut;

    while (penyebut == 0)
    {

        cout << "Penyebut Invalid";

        cout << "Mohon Masukkan Ulang";
    }
}

void fraction::displayfraction()
{

    cout << "\nreduced fraction : "
         << "" << bilbulat << "" << pembilang << "/" << penyebut;
}

void fraction::reducefraction()
{

    int complete = bilbulat * penyebut + pembilang;

    bilbulat = complete / penyebut;

    pembilang = complete % penyebut;

    if ((pembilang % 2 == 0) && (penyebut % 2 == 0))
    {

        pembilang = pembilang / 2;

        penyebut = penyebut / 2;
    }
}

int main()
{

    int cal = 0;

    fraction newfraction;

    while (cal == 0)
    {

        newfraction.enterfractionValue();

        if ((newfraction.getbilbulat() == 0) && (newfraction.getpembilang() == 0))

            cal = 1;

        break;
    }

    newfraction.reducefraction();

    newfraction.displayfraction();

    newfraction.reducefraction();

    newfraction.displayfraction();
    system("pause");

    return 0;
}