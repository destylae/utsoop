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

class Anjing : public Hewan {
public:
    string berbulu;

    Anjing(string jenis,  string namaHewan, string caraBerkembangBiak,string caraBerjalan, const string& berbulu)
        : Hewan(jenis, namaHewan, caraBerkembangBiak, caraBerjalan), berbulu(berbulu) {}

    void tampilkanInformasi() {
        Hewan::tampilkanInfo();
        cout << "Apakah Berbulu?: " << berbulu << endl<< endl;
    }
};
int main()
{
    Anjing Anjing1("Mamalia", "Anjing", "vivipar","empat kaki","ya");
    Anjing1.tampilkanInformasi();
    return 0;
}