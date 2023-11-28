#include <iostream>
using namespace std;

class Kendaraan {
public:
    double kecepatan;

    //constructor
    Kendaraan(double kecepatanAwal) {
        kecepatan = kecepatanAwal;
    }
    
    //destructor    
     ~Kendaraan()
    {
        cout << "Objek Kendaraan telah dihancurkan" << endl;
    }

    void tampilkanKecepatan() {
        cout << "Kecepatan saat ini: " << kecepatan << " km/jam" << endl;
    }

    void tambahKecepatan(double tambahan) {
        kecepatan += tambahan;
    }

    void kurangiKecepatan(double pengurangan) {
        kecepatan -= pengurangan;
    }

    // Setter 
     void setKecepatan(double nilaiKecepatan) {
        kecepatan = nilaiKecepatan;
    }

    // Getter untuk mendapatkan nilai kecepatan
    double getKecepatan() {
        return kecepatan;
    }
};

int main() {
    Kendaraan mobil(60.0); // Membuat objek mobil dengan kecepatan awal 60.0 km/jam

    mobil.tampilkanKecepatan(); // Output: Kecepatan saat ini: 60 km/jam

    mobil.tambahKecepatan(40.0); // Menambah kecepatan sebanyak 20 km/jam
    mobil.tampilkanKecepatan(); // Output: Kecepatan saat ini: 80 km/jam

    mobil.kurangiKecepatan(10.0); // Mengurangi kecepatan sebanyak 10 km/jam
    mobil.tampilkanKecepatan(); // Output: Kecepatan saat ini: 70 km/jam

    mobil.setKecepatan(200.0); // Mengatur kecepatan menjadi 100 km/jam
   // mobil.tampilkanKecepatan(); // Output: Kecepatan saat ini: 100 km/jam
    double kecepatanMobil = mobil.getKecepatan(); // Mendapatkan nilai kecepatan
    cout << "Kecepatan mobil adalah: " << kecepatanMobil << " km/jam" << endl;

    return 0;
}
