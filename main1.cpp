#include <iostream>
#include "kendaraan.h"
using namespace std;

int main()
{
    // instansiasi class

    Kendaraan kendaraan1;
    kendaraan1.kecepatan = 100;
    kendaraan1.tambahkecepatanKendaraan(20);
    kendaraan1.kurangikecepatanKendaraan(50);
    return 0;
}

