#include<iostream>

class PersegiPanjang {
public:
    double panjang;
    double lebar;

public:
    // Setter untuk mengatur panjang persegi panjang
    void setPanjang(double p) {
        panjang = p;
    }

    // Setter untuk mengatur lebar persegi panjang
    void setLebar(double l) {
        lebar = l;
    }

    // Getter untuk mendapatkan panjang persegi panjang
    double getPanjang() const {
        return panjang;
    }

    // Getter untuk mendapatkan lebar persegi panjang
    double getLebar() const {
        return lebar;
    }

    // Fungsi untuk menghitung luas persegi panjang
    double hitungLuas() const {
        return panjang * lebar;
    }

    // Fungsi untuk menghitung keliling persegi panjang
    double hitungKeliling() const {
        return 2 * (panjang + lebar);
    }
};

int main() {
    // Membuat objek dari kelas PersegiPanjang
    PersegiPanjang persegiPanjang;

    // Mengatur panjang dan lebar menggunakan setter
    persegiPanjang.setPanjang(12);
    persegiPanjang.setLebar(6);

    // Mendapatkan panjang dan lebar menggunakan getter
    double panjang = persegiPanjang.getPanjang();
    double lebar = persegiPanjang.getLebar();

    // Menghitung luas dan keliling menggunakan fungsi kelas
    double luas = persegiPanjang.hitungLuas();
    double keliling = persegiPanjang.hitungKeliling();

    // Menampilkan hasil
    std::cout << "Panjang: " << panjang << std::endl;
    std::cout << "Lebar: " << lebar << std::endl;
    std::cout << "Luas: " << luas << std::endl;
    std::cout << "Keliling: " << keliling << std::endl;

    return 0;
}