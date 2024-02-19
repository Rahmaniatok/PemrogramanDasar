//program yang membaca dua buah data jam kemudian menghitung selisih kedua jam tersebut
#include <iostream>
using namespace std;

int main () {
    int jam1, menit1, jam2, menit2, x, y, selisih;
    cout << "Masukkan data Jam 1 : ";
    cin >> jam1;
    cout << "Masukkan data Menit 1 : ";
    cin >> menit1;
    cout << "Masukkan data Jam 2 : ";
    cin >> jam2;
    cout << "Masukkan data Menit 2 : ";
    cin >> menit2;

    x = (jam1*60) + menit1;
    y = (jam2*60) + menit2;

    selisih = y-x;

    cout<<"Selisih kedua waktu tersebut "<< selisih<< " menit";
    return 0;
}
