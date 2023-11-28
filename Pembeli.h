#include <iostream>
using namespace std;

class Pembeli
{

  // property
  public :
    string nama;
    int umur;
    string jenisKelamin;
    string noTelp;
    string alamat;

  // method
  public :
    void cetakInfoPembeli()
    {
        cout << "Nama Pembeli : " << nama << ", Umur Pembeli : " << umur << " tahun, Jenis Kelamin : " << jenisKelamin << ", No. Telepon : " << noTelp << ", Alamat : " << alamat << "\n" << endl;
    }

};
