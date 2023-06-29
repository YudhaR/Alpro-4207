#include <bits/stdc++.h>
using namespace std;

enum Arah { UTARA, TIMUR, SELATAN, BARAT };

int main() {
    int arah = 1;

    switch (arah) {
        case Arah::UTARA:
            cout << "Mengarah ke Utara";
            break;
        case Arah::TIMUR:
            cout << "Mengarah ke Timur";
            break;
        case Arah::SELATAN:
            cout << "Mengarah ke Selatan";
            break;
        case Arah::BARAT:
            cout << "Mengarah ke Barat";
            break;
        default:
            cout << "Arah tidak valid";
            break;
    }

    return 0;
}
