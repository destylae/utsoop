#include <iostream>
using namespace std;

// class kendaraan
class Kendaraan
{
public:
    double kecepatan;

    // Constructor untuk kendaraan tercepat
    Kendaraancepat()
    {
        // kecepatan = 300; 
        cout << "Objek Kendaraan tercepat telah dibuat" << endl;
    }

    // Constructor untuk kendaraan terlambat
    Kendaraan(double kecepatanAwal)
    {
        kecepatan = kecepatanAwal;
        cout << "Objek Kendaraan terlambat telah dibuat" << endl;
    }

    // Destructor
    ~Kendaraan()
    {
        cout << "Objek Kendaraan telah dihancurkan" << endl;
    }

    void tambahkecepatanKendaraan(int tampung)
    {
        kecepatan = kecepatan + tampung;
        cout << "kecepatan berhasil ditambah : " << kecepatan << endl;
    }

    void kurangikecepatanKendaraan(int tampung)
    {
        kecepatan = kecepatan - tampung;
        cout << "kecepatan berhasil dikurang : " << kecepatan << endl;
    }
};