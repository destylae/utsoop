#include <iostream>
#include "Barang.h"
#include "Penjual.h"
#include "Pembeli.h"
using namespace std;

int main()
{

  // instansiasi object
  Barang barang1;
  // ini akses untuk property class
  barang1.namaBarang = "Shampoo";
  barang1.hargaBarang = 7000;
  barang1.stokBarang = 100;
  cout << "Cek stok barang 1 : " << barang1.cekStok() << endl;
  barang1.cetakInfoBarang();

  Barang barang2;
  barang2.namaBarang = "Pasta Gigi";
  barang2.hargaBarang = 11000;
  barang2.stokBarang = 25;
  barang2.cetakInfoBarang();

  // instansiasi object Penjual
  Penjual penjual1;
  penjual1.nama = "Udin";
  penjual1.umur = 21;
  penjual1.jenisKelamin = "Laki-laki";
  penjual1.lamaKerjaPerTahun = 2;

  penjual1.cetakInfoPenjual();

  // instansiasi object Pembeli
  Pembeli pembeli1;
  pembeli1.nama = "Siti";
  pembeli1.umur = 19;
  pembeli1.jenisKelamin = "Perempuan";
  pembeli1.noTelp = "081234435678";
  pembeli1.alamat = "Jakarta";

  pembeli1.cetakInfoPembeli();
 
}