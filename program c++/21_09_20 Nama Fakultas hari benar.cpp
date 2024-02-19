#include <iostream>
using namespace std;

int main () {
    string fakultas;
        cout << "Masukan nama fakultas (huruf kecil semua) : ";
        cin >> fakultas;

        if (fakultas=="mipa"){
        cout << "Jadwal pemakaian lapangan : Senin dan Rabu"<<endl;
        } else if (fakultas=="teknik"){
        cout << "Jadwal pemakaian lapangan : Senin dan Jumat"<<endl;
        }else if (fakultas=="biologi"){
        cout << "Jadwal pemakaian lapangan : Senin dan Kamis"<<endl;
        }else if (fakultas=="fkkmk"){
        cout << "Jadwal pemakaian lapangan : Selasa dan Kamis"<<endl;
        }else if (fakultas=="geografi"){
        cout << "Jadwal pemakaian lapangan : Selasa dan Kamis"<<endl;
        }else if (fakultas=="kehutanan"){
        cout << "Jadwal pemakaian lapangan : Selasa dan Jumat"<<endl;
        }else if (fakultas=="hukum"){
        cout << "Jadwal pemakaian lapangan : Rabu dan Sabtu"<<endl;
        }else if (fakultas=="teknik"){
        cout << "Jadwal pemakaian lapangan : Rabu dan Jumat"<<endl;
        }else if (fakultas=="fisipol"){
        cout << "Jadwal pemakaian lapangan : Sabtu"<<endl;
        }else if (fakultas=="filsafat"){
        cout << "Jadwal pemakaian lapangan : Sabtu"<<endl;
        } else {
        cout << "Fakultas yang Anda masukan salah (nama fakultas harus huruf kecil!)";
        }
    return 0;
}

