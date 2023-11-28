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

class Babi : public Hewan {
public:
    string sexuality;

    Babi(string jenis, string namaHewan, string caraBerkembangBiak, string caraBerjalan, const string& sex)
        : Hewan(jenis, namaHewan, caraBerkembangBiak, caraBerjalan), sexuality(sex) {}

    void tampilkanInformasi() {
        Hewan::tampilkanInfo();
        cout << "apakah babi hewan yang lurus?: " << sexuality << endl << endl;
    }
};

int main()
{
    Babi babi1("Mamalia", "Babi", "vivipar", "empat kaki", "belok");
    babi1.tampilkanInformasi();
    return 0;
}
