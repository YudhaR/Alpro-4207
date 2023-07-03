#include <bits/stdc++.h>

using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n)
{

    if (n == 1)
        return;


    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            swap(&arr[i], &arr[i + 1]);
    }


    bubbleSort(arr, n - 1);
}

void printArray(int arr[], int n)
{
    cout << "{";
    for (int i = 0; i < n; i++){
        cout << arr[i];
        if(i+1<n)
            cout << ", ";
    }
    cout << "}";
}

int main()
{
    auto start = chrono::steady_clock::now();

    int arr1[] = { 12, 11, 13, 5, 6 };

    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Array sebelum diurutkan : ";
    printArray(arr1, n1);
    cout<<endl;

    bubbleSort(arr1, n1);

    cout << "Array setelah diurutkan : ";
    printArray(arr1, n1);
    cout<<endl;


    auto end = chrono::steady_clock::now();

    cout << "Elapsed time in microseconds: "<< chrono::duration_cast<chrono::microseconds>(end - start).count() << " µs" << endl;

    cout << "Elapsed time in milliseconds: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl;

    int space = sizeof(arr1) + sizeof(n1) + sizeof(start) + sizeof(end);
    cout << "Space complexity: " << space << " bytes" << endl;
    return 0;
}
