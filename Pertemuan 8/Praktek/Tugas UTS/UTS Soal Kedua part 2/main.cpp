/*
  Nama  : Yudha Rizqia Grafer
  Nim   : A11.2022.14280
  Kelas : A11.4207
*/

#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i, j, k;
    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
    if (L[i] >= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

    while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}


void mergesort(int arr[], int left, int right){
    if(left<right){
        int mid = left + (right-left)/2;

        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

void cetakArray(int arr[], int n){
    cout << "array [" << n << "] : {";
    for(int i=0;i<n;i++){
        cout << arr[i];
        if(i<n-1){
            cout << ", ";
        }
    }cout << "}" << endl;
}


int main()
{
    int arr [] = {4,2,3,1,5,1,2,3,4,8,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cetakArray(arr, n);
    mergesort(arr, 0, n-1);
    cetakArray(arr, n);
    return 0;
}
