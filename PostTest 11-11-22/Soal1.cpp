#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

class BasicTiket
{
    protected:
        string penumpang;
        string initKota;
        string TujKota;
        int NomorPenerbangan;
        int HargaTiket;
    public:
        string getPenumpang();
        void setPenumpang(string);
        string getinitKota();
        void setinitKota(string);
        string getTujKota();
        void setTujKota(string);
        int getNoPen();
        void setNoPen(int);
        int getPrice();
        void setPrice(int);
        void showTicket();
};

string BasicTiket::getPenumpang()
{
    return penumpang;
}

void BasicTiket::setPenumpang(string pnp)
{
    penumpang = pnp;
}

string BasicTiket::getinitKota()
{
    return initKota;
}

void BasicTiket::setinitKota(string Kotainit)
{
    initKota = Kotainit;
}
string BasicTiket::getTujKota()
{
    return TujKota;
}

void BasicTiket::setTujKota(string Tk)
{
    TujKota = Tk;
}

int BasicTiket::getNoPen()
{
    return NomorPenerbangan;
}

void BasicTiket::setNoPen(int pn)
{
    NomorPenerbangan = pn;
}

int BasicTiket::getPrice()
{
    return HargaTiket;
}

void BasicTiket::setPrice(int price)
{
    HargaTiket = price;
}


void BasicTiket::showTicket()
{
    cout << "Nama Penumpang : " << getPenumpang() << "\nKota Asal : "<< getinitKota() << "\nKota Tujuan : "<< getTujKota() << "\nNomor Penerbangan : "<< getNoPen() << "\nHarga : " << getPrice() << endl;
}


//class Premium
class PremiumTicket: public BasicTiket
{
    protected:
        int NomorKursiPenumpang;
        //int PremiumPrice;
    public:
        void PremiumPrice();
        void showPT();
};

void PremiumTicket::PremiumPrice()
{
    
    HargaTiket = HargaTiket * 10;
    HargaTiket = HargaTiket / 100;
}

int main()
{
    BasicTiket aTicket;
    aTicket.setPenumpang("Arya");
    aTicket.setinitKota("Surabaya");
    aTicket.setTujKota("San Francisco");
    aTicket.setNoPen(112233);
    aTicket.setPrice(1000000);
    aTicket.showTicket();
    PremiumTicket bTicket;
    bTicket.setPenumpang("Budi");
    bTicket.setinitKota("Sidoarjo");
    bTicket.setTujKota("Tokyo");
    bTicket.setNoPen(22334455);
    bTicket.setPrice(1000000);
    bTicket.PremiumPrice();
    bTicket.showTicket();
}