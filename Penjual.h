#include <iostream>
using namespace std;

class Penjual{

  // property
  public :
    string nama;
    int umur;
    string jenisKelamin;
    int lamaKerjaPerTahun;

  // method
  public :
    void cetakInfoPenjual()
    {
      cout << "Nama Penjual : " << nama << ", Umur Penjual : " << umur << " tahun, Jenis Kelamin : " << jenisKelamin << ", Lama Kerja : " << lamaKerjaPerTahun << "tahun\n" << endl;
    }
  
}; 
