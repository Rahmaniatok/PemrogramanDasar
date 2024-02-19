//program untuk menampilkan jumlah hari dalam bulan

#include <iostream>
using namespace std;

int main () {
    int bulan;
    cout << "Masukkan kode bulan (1-12) :";
    cin>> bulan;

    switch (bulan) {
        case 1 : cout << "Jumlah hari dalam bulan Januari adalah 31";
        break;
        case 2 : cout << "Jumlah hari dalam bulan Februari adalah 28 pada tahun bukan kabisat dan 29 pada tahun kabisat.";
        break;
        case 3 : cout << "Jumlah hari dalam bulan Maret adalah 31";
        break;
        case 4 : cout << "Jumlah hari dalam bulan April adalah 30";
        break;
        case 5 : cout << "Jumlah hari dalam bulan Mei adalah 31";
        break;
        case 6 : cout << "Jumlah hari dalam bulan Juni adalah 30";
        break;
        case 7 : cout << "Jumlah hari dalam bulan Juli adalah 31";
        break;
        case 8 : cout << "Jumlah hari dalam bulan Agustus adalah 31";
        break;
        case 9 : cout << "Jumlah hari dalam bulan September adalah 30";
        break;
        case 10 : cout << "Jumlah hari dalam bulan Oktober adalah 31";
        break;
        case 11 : cout << "Jumlah hari dalam bulan November adalah 30";
        break;
        case 12 : cout << "Jumlah hari dalam bulan Desember adalah 31";
        break;
        default : cout << "Maaf,, tidak terdapat bulan ke-"<< bulan;
    }
    return 0;
}
