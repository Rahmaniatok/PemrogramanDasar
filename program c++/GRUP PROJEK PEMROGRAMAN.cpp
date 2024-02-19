#include <iostream>
using namespace std;
struct data_mahasiswa {
string nama;
int nim;
int nilai[100];
int sks[100];
double ipk;
};

double hitung_ipk (int nilai[], int sks[], int n) {
int i;
double jumlah_nilai=0, jumlah_sks=0;
for (i=0;i<n;i++){
    jumlah_nilai += nilai[i]*sks[i];
    jumlah_sks += sks[i];
}
return jumlah_nilai/(jumlah_sks*25);
}

int main (){
//awal
int n, i, j, jumlah_mhs, pilihan, cari_nim, mid;
string cari_nama;
data_mahasiswa temp;
cout << "Selamat datang! masukkan nilai mahasiswa terlebih dahulu (masukkan NIM secara urut).\n";
cout << "Masukan jumlah mahasiswa     :";
cin >> jumlah_mhs;
data_mahasiswa mhs[jumlah_mhs];
data_mahasiswa mhs_urut[jumlah_mhs];
cout << "Masukkan jumlah mata kuliah  :";
cin >> n;

//input sks yang sama untuk tiap mahasiswa
for(i=0;i<n;i++){
    cout << "Masukkan sks mata kuliah ke-" << i+1 << ":";
    cin >> mhs[0].sks[i];
    for (j=0;j<jumlah_mhs;j++) {
    mhs[j].sks[i] = mhs[0].sks[i];
}
}

//input data tiap mahasiswa
cout << endl;
for (i=0;i<jumlah_mhs;i++){
    cout << i+1 << ".Nama:"; cin >> mhs[i].nama;
    cout << "  NIM :"; cin >> mhs[i].nim;
    for (j=0;j<n;j++){
        cout << "  Masukan nilai ke-" << j+1 << ":";
        cin >> mhs[i].nilai[j];
    }
}
cout << "=============================\n";

//menghitung ipk tiap mahasiswa
for (i=0;i<jumlah_mhs;i++){
mhs[i].ipk = hitung_ipk(mhs[i].nilai, mhs[i].sks, n);
}

do {
    //Output pilihan menu
    cout << "\nSilahkan pilih menu berikut: \n";
    cout << "1.Hitung IPK\n";
    cout << "2.Mengurutkan berdasar IPK tertinggi\n";
    cout << "3.Cari NIM\n";
    cout << "4.Cari nama\n";
    cout << "5.Keluar\n";
    cout << "Pilihan Anda: "; cin >> pilihan;
    cout << "=============================\n";
    if (pilihan == 1) {
      for (i=0;i<jumlah_mhs;i++){
        cout << i+1 << "." << mhs[i].nama;
        cout << "\n  IPK: " << mhs[i].ipk << endl;
      }
    } else if (pilihan == 2) {
        for (i=0;i<jumlah_mhs;i++){
            mhs_urut[i] = mhs[i];
        }
        for (j=1;j<jumlah_mhs;j++){
            i=j-1;
            temp=mhs_urut[j];
            while (mhs_urut[i].ipk<temp.ipk && i>=0){
                mhs_urut[i+1]=mhs_urut[i];
            i--;
            }
            mhs_urut[i+1]=temp;
        }
        for (i=0;i<jumlah_mhs;i++){
            cout << "\n" << i+1 << "." << mhs_urut[i].nama;
            cout << "\n  IPK : " << mhs_urut[i].ipk;
        }
    } else if (pilihan == 3){
        cout << "Masukkan nama: "; cin >> cari_nama;
        for (i=0;i<jumlah_mhs;i++){
            if (mhs[i].nama == cari_nama){
                cout << "NIM: " << mhs[i].nim;
                break;
            }
        }
        cout << endl;
    } else if (pilihan == 4) {
        cout << "Masukkan NIM: "; cin >> cari_nim;
        bool found = false;
        i = 0;
        j = jumlah_mhs - 1;
        while(!found && i<=j){
            mid = (i+j)/2;
            if(mhs[mid].nim < cari_nim){
                i = mid+1;
            } else if(mhs[mid].nim == cari_nim){
                cout << "Nama: " << mhs[mid].nama;
                found = true;
                break;
            } else {
                j = mid-1;
            }
        }
        cout << endl;
    } else {
        break;
    }
} while (true);
return 0;
}

