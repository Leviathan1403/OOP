#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;


//clas Buku
class Buku
{
protected:
    string Judul;
    string Pengarang;

public:
    void setjudul(string);
    string getjudul();
    void setPengarang(string);
    string getPengarang();
    void showinfo();
};

void Buku::setjudul(string jdl)
{
    Judul = jdl;
}

string Buku::getjudul()
{
    return Judul;
}

void Buku::setPengarang(string pgr)
{
    Pengarang = pgr;
}

string Buku::getPengarang()
{
    return Pengarang;
}

void Buku::showinfo()
{
    cout << "Buku Pertama adalah Buku " << Judul << " karya " << Pengarang << endl;
}

//class Fiction
class Fiction : public Buku
{
private:
    int nilainumerik;
public:
    void setnilainumerik(int);
    int getnilainumerik();
    void showinfonumerik();
};

void Fiction::setnilainumerik(int numerik)
{
    nilainumerik = numerik;
}

int Fiction::getnilainumerik()
{
    return nilainumerik;
}

void Fiction::showinfonumerik()
{
    cout << "Nilai Numerik Membaca : " << getnilainumerik() << endl;
}

//Class NonFiction
class NonFiction: public Buku
{
private:
    int jumlahhalaman;
public:
    void showHalaman();
    void sethalaman(int);
    int gethalaman();
};

void NonFiction::sethalaman(int halaman)
{
    jumlahhalaman = halaman;
}

int NonFiction:: gethalaman()
{
    return jumlahhalaman;
}
void NonFiction::showHalaman()
{
    cout << "Halaman : " << gethalaman() << endl;
}

main()
{
    Fiction aBuku;
    aBuku.setjudul("Kisah Raden Wijaya");
    aBuku.setPengarang("Adi");
    aBuku.setnilainumerik(80);
    aBuku.showinfo();
    aBuku.showinfonumerik();
    NonFiction bBuku;
    bBuku.setjudul("Kisah Soeharto");
    bBuku.setPengarang("M. Andhika");
    bBuku.sethalaman(268);
    bBuku.showinfo();
    bBuku.showHalaman();
};