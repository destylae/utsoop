#include <iostream>
using namespace std;
// class barang
class Barang
{

    // property / attribute
    public :
      string namaBarang;
      int hargaBarang;
      int stokBarang;

    // method / behavior
    public :

      // Constructor
      Barang()
      {
        cout << "Berhasil instansiasi Object Barang" << endl;
      }

      // Destructor
      ~Barang()
      {
        cout << "Sudah selesai menggunakan Object Barang" << endl;
      }
      
    // method tambah stok barang
      void tambahStok(int jmlTambah)
      {
        stokBarang = stokBarang + jmlTambah;
        cout << "Stok berhasil ditambahkan menjadi : " << stokBarang << "\n" << endl;
      }

      // method kurangi stok barang
      void kurangiStok(int jmlKurang)
      {
        stokBarang = stokBarang - jmlKurang;
        cout << "Stok berhasil dikurangi menjadi : " << stokBarang << "\n" << endl;
      }

      // method cek stok barang
      bool cekStok()
      {
        if( stokBarang > 0 )
        {
            return true;
        }else{
            return false;
      }
    }

    void cetakInfoBarang()
    {
      cout << "Nama Barang : " << namaBarang << ", Harga Barang : Rp." << 
      hargaBarang << ", Stok Barang : " << stokBarang << "psc.\n" << endl;
    }
};