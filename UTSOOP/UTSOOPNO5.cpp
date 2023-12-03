#include <iostream>
#include <string>

class Mobil {
public:
    std::string namaMobil;
    std::string modelMobil;
    double kecepatan;

public:
    Mobil(const std::string& nama, const std::string& model, double kecepatan)
        : namaMobil(nama), modelMobil(model), kecepatan(kecepatan) {}

    // Mempercepat mobil
    void percepat(double tambahKecepatan) {
        kecepatan += tambahKecepatan;
        std::cout << "Mobil dipercepat. Kecepatan sekarang: " << kecepatan << " km/jam" << std::endl;
    }

    // Memperlambat mobil
    void perlambat(double kurangiKecepatan) {
        if (kecepatan - kurangiKecepatan >= 0) {
            kecepatan -= kurangiKecepatan;
            std::cout << "Mobil diperlambat. Kecepatan sekarang: " << kecepatan << " km/jam" << std::endl;
        } else {
            std::cout << "Mobil sudah berhenti." << std::endl;
            kecepatan = 0;
        }
    }

    // Menampilkan informasi mobil
    void tampilkanInformasi() const {
        std::cout << "Informasi Mobil" << std::endl;
        std::cout << "Nama Mobil: " << namaMobil << std::endl;
        std::cout << "Model Mobil: " << modelMobil << std::endl;
        std::cout << "Kecepatan: " << kecepatan << " km/jam" << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    // Membuat objek Mobil
    Mobil mobil("Brio", "RS CVT", 90.0);
    
    // Menampilkan informasi awal
    mobil.tampilkanInformasi();

    // Mempercepat mobil
    mobil.percepat(10.0);

    // Memperlambat mobil
    mobil.perlambat(30.0);

    // Menampilkan informasi setelah transaksi
    mobil.tampilkanInformasi();

    return 0;
}