#include <iostream>
#include <string>

using namespace std;

class Hewan {
public:
    // Property
    string jenis;
    string namaHewan;
    string caraBerkembangBiak;
    string caraBerjalan;

    // Konstruktor
    Hewan(string jenis, string namaHewan, string caraBerkembangBiak, string caraBerjalan)
        : jenis(jenis), namaHewan(namaHewan), caraBerkembangBiak(caraBerkembangBiak), caraBerjalan(caraBerjalan) {}

    void tampilkanInfo()
    {
        cout << "Jenis: " << jenis << endl;
        cout << "Nama Hewan: " << namaHewan << endl;
        cout << "Cara Melahirkan " << caraBerkembangBiak << endl;
        cout << "Cara Berjalan : " << caraBerjalan << endl;
    }
};
class Monyet : public Hewan {
public:
    string jenisMakanan;

    Monyet(string jenis,  string namaHewan, string caraBerkembangBiak,string caraBerjalan, const string& jenisMakanan)
        : Hewan(jenis, namaHewan, caraBerkembangBiak, caraBerjalan), jenisMakanan(jenisMakanan){}

    void tampilkanInformasi() {
        Hewan::tampilkanInfo();
        cout << "Monyet termasuk hewan pemakan apa?: " << jenisMakanan << endl<< endl;
    }
    
};
int main()
{
    Monyet monyet1("Mamalia", "Monyet", "vivipar","dua kaki","Herbivora");
    monyet1.tampilkanInformasi();
    return 0;
}