#include <iostream>
using namespace std;

int jumlah_rekursif (int AngkaAwal, int AngkaPertambahan, int iterasi){
    if (iterasi==0){
        return AngkaAwal;
    } else if (iterasi%2==0 && iterasi!=0){
        return jumlah_rekursif(AngkaAwal,AngkaPertambahan,iterasi-1) + AngkaPertambahan;
    } else if (iterasi%2!=0) {
        return jumlah_rekursif(AngkaAwal,AngkaPertambahan,iterasi-1) + AngkaPertambahan*2;
    }
}

int main () {
int hasil, AngkaAwal, AngkaPertambahan,iterasi;
cout << "Angka awal: "; cin >> AngkaAwal;
cout << "Angka pertambahan: "; cin >> AngkaPertambahan;
cout << "Iterasi: "; cin >> iterasi;

hasil = jumlah_rekursif(AngkaAwal,AngkaPertambahan,iterasi);
cout << hasil;
return 0;
}
