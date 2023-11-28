#include<iostream>
#include<cmath>

class Tabung {
public:
    double jariJari;
    double tinggi;

public:
    // Konstruktor untuk inisialisasi properti
    Tabung(double r, double t) : jariJari(r), tinggi(t) {}

    // Method untuk menghitung volume tabung
    double hitungVolume() {
        return M_PI * pow(jariJari, 2) * tinggi;
    }

    // Method untuk menghitung luas permukaan tabung
    double hitungLuasPermukaan() {
        return 2 * M_PI * jariJari * (jariJari + tinggi);
    }

    // Method untuk menampilkan informasi tabung
    void tampilkanInfo() {
        std::cout << "Tabung dengan jari-jari: " << jariJari << " dan tinggi: " << tinggi << std::endl;
        std::cout << "Volume tabung: " << hitungVolume() << std::endl;
        std::cout << "Luas permukaan tabung: " << hitungLuasPermukaan() << std::endl;
    }
};

int main() {
    // Membuat objek tabung dengan jari-jari 7 dan tinggi 25
    Tabung tabung1(7, 25);

    // Menampilkan informasi tabung dan hasil perhitungan
    tabung1.tampilkanInfo();

    return 0;
}