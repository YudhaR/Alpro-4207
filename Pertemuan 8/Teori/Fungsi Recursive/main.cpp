/*
    Nama  : Yudha Rizqia Grafer
    Nim   : A11.2022.14280
    Kelas : A11.4207
*/

#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    if(a<=0 && b<=0){
        return 0;
    }
    else if(a > 0){
        return 1 + penjumlahan(a-1, b);
    }
    else if(b > 0){
        return 1 + penjumlahan(a, b-1);
    }

}

int pengurangan(int a, int b) {
    if (a <= 0 && b <= 0) {
        return 0;
    }
    else if (a > 0) {
        return 1 + pengurangan(a - 1, b);
    }
    else if (b > 0) {
        return -1 + pengurangan(a, b - 1);
    }
}

int perkalian(int a,int b){
    if (a <= 0 || b <= 0) {
        return 0;
    }
	else if (a > 0) {
        return a + perkalian(a, b - 1);
	}
	else if (b > 0) {
        return (-a) + perkalian(a, b+1);
	}
}

int pembagian(int a, int b) {
    if (a <= 0 || b <= 0) {
        return 0;
    }
    else if (a < b) {
        return 0;
    }
    else {
        return 1 + pembagian(a-b, b);
    }
}


int pangkat(int a, int b)
{
   if(b == 0)
      return 1;
   else
      return a*pangkat(a,b-1);
}


int fibonaci(int a){
    if(a==1){
        return 1;
    }
    else if (a==0){
        return 0;
    }
    else{
        return fibonaci(a-1)+fibonaci(a-2);
    }
}

int faktorial(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*faktorial(a-1);
    }
}

int main()
{
    cout << "==========================================================" << endl;
    cout << "| Program Fungsi Rekursif ( penjumlahan, pengurangan, pe |" << endl;
    cout << "| rkalian, pembagian, pangkat, fibonaci, dan faktorial ) |"<< endl;
    cout << "==========================================================" << endl;
    int x, y;
    cout << "Masukkan Bilangan Pertama : ";
    cin >> x;
    cout << "Masukkan Bilangan Kedua : ";
    cin >> y;
    cout << "==========================================================" << endl;
    cout << "Penjumlahan dari bilangan " << x << " dan " << y << " : " << penjumlahan(x,y) << endl;
    cout << "Pengurangan dari bilangan " << x << " dan " << y << " : " << pengurangan(x,y) << endl;
    cout << "Perkalian dari bilangan " << x << " dan " << y << " : " << perkalian(x,y) << endl;
    cout << "Pembagian dari bilangan " << x << " dan " << y << " : " << pembagian(x,y) << endl;
    cout << "==========================================================" << endl;
    cout << "Fibonaci index ke-" << x << " : " << fibonaci(x) << endl;
    for(int i=0; i<=x ;i++){
        cout << fibonaci(i) << " ";
    }
    cout << endl;
    cout << "Fibonaci index ke-" << y << " : " << fibonaci(y) << endl;
    for(int i=0; i<=y ;i++){
        cout << fibonaci(i) << " ";
    }
    cout << endl;
    cout << "==========================================================" << endl;
    cout << "Faktorial bilangan " << x << " : " << faktorial(x) << endl;
    cout << "Faktorial bilangan " << y << " : " << faktorial(y) << endl;
    cout << "Pangkat : " << pangkat(x, y) << endl;
    cout << "==========================================================" << endl;
    return 0;
}
