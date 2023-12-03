#include <iostream>
#include <string>

class RekeningBank {
public:
    std::string nama;
    std::string nomorRekening;
    double saldo;

public:
    RekeningBank(const std::string& nama, const std::string& nomorRekening, double saldo)
        : nama(nama), nomorRekening(nomorRekening), saldo(saldo) {}

    // Menambah saldo rekening
    void tambahSaldo(double jumlah) {
        saldo += jumlah;
        std::cout << "Saldo berhasil ditambahkan. Saldo sekarang: " << saldo << std::endl;
    }

    // Mengurangi saldo rekening
    void kurangiSaldo(double jumlah) {
        if (jumlah > saldo) {
            std::cout << "Saldo tidak mencukupi." << std::endl;
        } else {
            saldo -= jumlah;
            std::cout << "Penarikan berhasil. Saldo sekarang: " << saldo << std::endl;
        }
    }

    // Menampilkan informasi rekening
    void tampilkanInformasi() const {
        std::cout << "Informasi Rekening" << std::endl;
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Nomor Rekening: " << nomorRekening << std::endl;
        std::cout << "Saldo: " << saldo << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    // Membuat objek RekeningBank
    RekeningBank rekening("Desty Laela", "12122004", 300000.0);
    
    // Menampilkan informasi awal
    rekening.tampilkanInformasi();

    // Menambah saldo
    rekening.tambahSaldo(80000.0);

    // Mengurangi saldo
    rekening.kurangiSaldo(50000.0);

    // Menampilkan informasi setelah transaksi
    rekening.tampilkanInformasi();

    return 0;
}