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
class Kucing : public Hewan {
public:
    string habitat;

    Kucing(string jenis,  string namaHewan, string caraBerkembangBiak,string caraBerjalan, const string& habitat)
        : Hewan(jenis, namaHewan, caraBerkembangBiak, caraBerjalan), habitat(habitat){}

    void tampilkanInformasi() {
        Hewan::tampilkanInfo();
        cout << "manakah habitat kocheng?: " << habitat << endl<< endl;
    }
    
};
int main()
{
    Kucing kucing1("Mamalia", "Kucing", "vivipar","empat kaki","darat");
    kucing1.tampilkanInformasi();
    return 0;
}