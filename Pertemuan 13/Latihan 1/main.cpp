#include <bits/stdc++.h>
using namespace std;

struct Operation {
    public:
    int Luas_PersegiPanjang (int panjang, int lebar){
        return panjang * lebar;
    }
    int Luas_Lingkaran (int r){
        return (22 * r * r)/7;
    }
    float Volume_Kerucut (int r,int t){
        return (3.14 * r * r *t)/3;
    }
    float Volume_Bola (int r){
        return (4 * 3.14 * r * r *r)/3;
    }
};

int main()
{

    Operation operasi;
    int panjang,lebar,r,tinggi;
    cout << "Masukkan Panjang dan Lebar : ";
    cin >> panjang;
    cin >> lebar;
    cout << "Luas Persegi Panjang : " << operasi.Luas_PersegiPanjang(panjang,lebar) << endl;
    cout << "Masukkan Jari-Jari  dan Tinggi: ";
    cin >> r;
    cin >> tinggi;
    cout << "Luas Lingkaran : " << operasi.Luas_Lingkaran(r) << endl;
    cout << "VOlume Kerucut : " << operasi.Volume_Kerucut(r,tinggi) << endl;
    cout << "Volume Bola : " << operasi.Volume_Bola(r) << endl;


    return 0;
}
