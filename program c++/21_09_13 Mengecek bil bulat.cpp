//program untuk mengecek bilangan bulat

#include <iostream>
using namespace std;

int main () {
    float bil;
    int a;
    cout<< "Masukkan bilangan : ";
    cin >> bil;

    a = bil*1000;

    if (a % 1000 == 0) {
    cout << "Bilangan tersebut merupakan bilangan bulat.";
    } else {
    cout << "Bilangan tersebut bukan bilangan bulat.";
    }
   return 0;
}
