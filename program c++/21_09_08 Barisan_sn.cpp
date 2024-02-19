//Program untuk meng-output-kan suku ke-n dari barisan bilangan: 1, 3, 6, 10, 15, 21, 28, 36, ...

#include <iostream>
using namespace std;

int main(){
    int n, x, i;
    cout << "Masukkan n: ";
    cin>> n;

    x = 0;
    for (i=1;i<=n;i++) {
        x = x + i;
    }

    cout<< x;

    return 0;
}
