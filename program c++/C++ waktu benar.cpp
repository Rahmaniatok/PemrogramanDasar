//program untuk menghitung waktu yang ditempuh berdasarkan kecepatan dan jarak yang ada dengan menggunakan input dari user
#include <iostream>
using namespace std;

int main () {
    int kecepatan, jarak;
    float waktu;

    cout<< "Masukkan jarak (dalam km): ";
    cin>>jarak;
    cout<<"Masukkan kecepatan (dalam km/jam): ";
    cin >> kecepatan;

    waktu = (float) jarak/kecepatan;

    cout<< "Waktu yang dibutuhkan untuk menempuh jarak "<< jarak << " km dengan kecepatan "<< kecepatan<< " km/jam adalah "<< waktu<< " jam.";
    return 0;
}
