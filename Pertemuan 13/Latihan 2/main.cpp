#include <iostream>

using namespace std;

struct Sepeda {
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    int Tahun = 2013;
    string Harga = "2.000.000";
};

int main()
{
    Sepeda sepeda;
    cout << sepeda.Merk << "\n" <<  sepeda.Type << "\n" << sepeda.Tahun << "\n" << sepeda.Harga;

    return 0;
}
