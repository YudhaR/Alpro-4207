#include <bits/stdc++.h>

using namespace std;

struct Sepeda {
    string Merk, Type, Harga;
    int Tahun;
};

int main() {
    Sepeda sepeda;
    Sepeda* pointerSepeda;

    sepeda.Merk = "Polygon";
    sepeda.Type = "Sepeda Gunung";
    sepeda.Tahun = 2013;
    sepeda.Harga = "2.000.000";

    pointerSepeda = &sepeda;

    cout << "Merk: " << pointerSepeda->Merk << endl;
    cout << "Type: " << pointerSepeda->Type << endl;
    cout << "Tahun: " << pointerSepeda->Tahun << endl;
    cout << "Harga: " << pointerSepeda->Harga << endl;

    return 0;
}
