#include <bits/stdc++.h>
using namespace std;

typedef struct mahasiswa {
    string nim,nama,jurusan;
    int lulus;
} mhs;


int main()
{
    //Array Statis
    mhs datamhs[4];
    cout << "Array Statis :" << endl;
    for(int i=0; i<4; i++){
        cout << "Masukkan NIM, Nama, Jurusan, dan Tahun Lulus untuk element ke-" << i+1 << endl;
        cin >> datamhs[i].nim >> datamhs[i].nama >> datamhs[i].jurusan >> datamhs[i].lulus;
    }

    cout << "_________________________________________________________" << endl;
    cout << "| NIM \t\t | Nama | Jurusan \t| Tahun Lulus \t|" << endl;
    for(int i=0; i<4; i++){
        cout << "| " << datamhs[i].nim << " | " << datamhs[i].nama << "\t| " << datamhs[i].jurusan << "\t| " << datamhs[i].lulus << "\t\t|" <<endl;
    }
    cout << "=========================================================" << endl;

    //Array Dinamis
    int n;
    cout << "Array Dinamis : " << endl;
    cout << "Masukkan jumlah element array :";
    cin >> n;
    mhs datamhs1[n];
    for(int i=0; i<n; i++){
        cout << "Masukkan NIM, Nama, Jurusan, dan Tahun Lulus untuk element ke-" << i+1 << endl;
        cin >> datamhs1[i].nim >> datamhs1[i].nama >> datamhs1[i].jurusan >> datamhs1[i].lulus;
    }

    cout << "_________________________________________________________" << endl;
    cout << "| NIM \t\t | Nama | Jurusan \t| Tahun Lulus \t|" << endl;
    for(int i=0; i<n; i++){
        cout << "| " << datamhs1[i].nim << " | " << datamhs1[i].nama << "\t| " << datamhs1[i].jurusan << "\t| " << datamhs1[i].lulus << "\t\t|" <<endl;
    }
    cout << "=========================================================" << endl;
    return 0;
}
