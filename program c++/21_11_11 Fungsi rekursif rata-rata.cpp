#include <iostream>
using namespace std;
double HitungRata2 (double nilai[], long indeksawal, long indeksakhir){
if (indeksawal==indeksakhir){
    return nilai[indeksakhir]/(indeksakhir+1);
} else {
    return nilai[indeksawal]/(indeksakhir+1) + HitungRata2(nilai, indeksawal+1, indeksakhir);
}
}

int main (){
long n, i, nilaiA=0;
cout << "Masukkan jumlah mahasiswa: ";
cin >> n;
double nilai[n];
cout << "Masukkan nilai mahasiswa: ";
for (i=0;i<n;i++){
    cin >> nilai[i];
}
cout << "Rata-rata: " << HitungRata2(nilai,0,n-1) << endl;
cout << "\nMahasiswa berindeks nilai A dan nilainya: \n";
for (i=0;i<n;i++){
    if (nilai[i]>HitungRata2(nilai,0,n-1)){
    cout << "Mahasiswa ke-" << i+1 << ": " << nilai[i] << endl;
        nilaiA++;
    }
}
cout << "Mahasiswa berindeks nilai A berjumlah: " << nilaiA << endl;
return 0;
}
