#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Diperlukan untuk std::find

class Mahasiswa {
public:
    std::string nama;
    std::string nomorInduk;
    std::vector<std::string> mataKuliah;

    Mahasiswa(const std::string& nama, const std::string& nomorInduk)
        : nama(nama), nomorInduk(nomorInduk) {}

    // Menambah mata kuliah
    void tambahMataKuliah(const std::string& mataKuliahBaru) {
        mataKuliah.push_back(mataKuliahBaru);
        std::cout << "Mata kuliah '" << mataKuliahBaru << "' berhasil ditambahkan." << std::endl;
    }

    // Menghapus mata kuliah
    void hapusMataKuliah(const std::string& mataKuliahHapus) {
        auto it = std::find(mataKuliah.begin(), mataKuliah.end(), mataKuliahHapus);
        if (it != mataKuliah.end()) {
            mataKuliah.erase(it);
            std::cout << "Mata kuliah '" << mataKuliahHapus << "' berhasil dihapus." << std::endl;
        } else {
            std::cout << "Mata kuliah '" << mataKuliahHapus << "' tidak ditemukan." << std::endl;
        }
    }

    // Menghitung nilai rata-rata
    double hitungRataRata() const {
        if (mataKuliah.empty()) {
            std::cout << "Tidak ada mata kuliah untuk dihitung nilai rata-rata." << std::endl;
            return 0.0; // Nilai rata-rata 0 jika tidak ada mata kuliah
        }

        double totalNilai = 0.0;
        for (const std::string& mataKuliah : mataKuliah) {
            double nilai;
            std::cout << "Masukkan nilai untuk mata kuliah '" << mataKuliah << "': ";
            std::cin >> nilai;
            totalNilai += nilai;
        }

        return totalNilai / mataKuliah.size();
    }

    // Menampilkan catatan akademik
    void tampilkanCatatanAkademik() const {
        std::cout << "Catatan Akademik" << std::endl;
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Nomor Induk: " << nomorInduk << std::endl;
        std::cout << "Daftar Mata Kuliah: ";
        for (const std::string& mataKuliah : mataKuliah) {
            std::cout << mataKuliah << ", ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mahasiswa("Desty Laela", "202211009");

    // Menampilkan catatan akademik awal
    mahasiswa.tampilkanCatatanAkademik();

    // Menambah mata kuliah
    mahasiswa.tambahMataKuliah("OOP");
    mahasiswa.tambahMataKuliah("Basis Data");
    mahasiswa.tambahMataKuliah("Artificial Inteligence");
    mahasiswa.tambahMataKuliah("Design Multimedia");

    // Menampilkan catatan akademik setelah menambah mata kuliah
    mahasiswa.tampilkanCatatanAkademik();

    // Menghapus mata kuliah
    mahasiswa.hapusMataKuliah("Basis Data");

    // Menampilkan catatan akademik setelah menghapus mata kuliah
    mahasiswa.tampilkanCatatanAkademik();

    // Menghitung nilai rata-rata
    double rataRata = mahasiswa.hitungRataRata();
    std::cout << "Nilai rata-rata: " << rataRata << std::endl;

    return 0;
}