#include <iostream>
using namespace std:

int main () {
    string "fakultas", "mipa", "teknik", "biologi", "fkkmk", "geografi", "kehutanan", "hukum", "feb", "fisipol", "filsafat";
    cout << "Masukkan nama fakultas :";
    cin >> "fakultas";

    if ("fakultas" = "mipa"){
        cout << "Jadwal pemakaian lapangan :Senin dan Rabu";
    } if else ("fakultas" = "teknik"){
        cout << "Jadwal pemakaian lapangan :Senin dan Jumat";
    }if else ("fakultas" = "biologi"){
        cout << "Jadwal pemakaian lapangan :Senin dan Kamis";
    }if else ("fakultas" = "fkkmk"){
        cout << "Jadwal pemakaian lapangan :Selasa dan Kamis";
    }if else ("fakultas" = "geografi"){
        cout << "Jadwal pemakaian lapangan :Selasa dan Kamis";
    }if else ("fakultas" = "kehutanan"){
        cout << "Jadwal pemakaian lapangan :Selasa dan Jumat";
    }if else ("fakultas" = "hukum"){
        cout << "Jadwal pemakaian lapangan :Rabu dan Sabtu";
    }if else ("fakultas" = "feb"){
        cout << "Jadwal pemakaian lapangan :Rabu dan Jumat";
    }if else ("fakultas" = "fisipol"){
        cout << "Jadwal pemakaian lapangan :Sabtu";
    }if else ("fakultas" = "filsafat"){
        cout << "Jadwal pemakaian lapangan :Sabtu";
    } else {
        cout << "Nama yang Anda masukan salah, ingat selalu untuk menggunakan huruf kecil semua!";
    }
    return 0;
}
