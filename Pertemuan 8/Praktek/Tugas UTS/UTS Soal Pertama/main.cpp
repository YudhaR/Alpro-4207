/*
    Nama  : Yudha Rizqia Grafer
    Nim   : A11.2022.14280
    Kelas : A11.4207
*/

#include <iostream>

using namespace std;

int isGenap(int A, int minbil){
    return A % 2 == 0 ? A : minbil;
}

void minGenap(int A[], int n){

    //Mendefinisikan variabel minbil dengan bilangan genap paling awal
    int minbil, minidx;
    for(int i=0; i<n; i++){
        if(isGenap(A[i], minbil)==A[i]){
            minbil = A[i];
            minidx = i;
            break;
        }
    }

    //Mengecek Bilangan Genap Terkecil
    for(int i=0; i<n;i++){
        if(A[i]<minbil){
            minbil = isGenap(A[i], minbil);
            if(minbil==A[i]){
                minidx = i;
            }
        }
    }cout << "Bilangan Genap Terkecilnya adalah " << minbil << " dan berada pada index ke-" << minidx;;
}

int main()
{
    int A[] = {6,5,4,3,2,1};
    int n  = sizeof(A)/sizeof(A[0]);
    minGenap(A, n);
    return 0;
}
