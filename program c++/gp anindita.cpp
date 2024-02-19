#include <bits/stdc++.h>

using namespace std;

void menu (){
    cout << "===========================================================================" << endl;
    cout << "Apakah ingin melakukan tindakan yang lain?" << endl;
    cout << "1 -> Mencari data mahasiwa berdasarkan NIM" << endl;
    cout << "2 -> Tampilkan summary seluruh nilai Mahasiswa"<< endl;
    cout << "3 -> Mengganti data mahasiswa" << endl;
    cout << "4 -> Tutup program"<< endl;
    cout << "Silahkan pilih salah satu tindakan :";
} //fungsi

struct RecData{
    string nama;
    char gender;
    float nilai[100];
    float rata2;
}; //struct

float average (int n,float nilai[]){
    if(n==0){
        return nilai[0];
    }
    else {
        return (nilai[n]+ ((n)*average(n-1,nilai)))/(n+1); //recursive rata-rata
    }
}

int searchData (int k,int n,int nim[],int cari){

    if(k>n)return -1;

    int mid=(k+n)/2;
    if(nim[mid]==cari) return mid;
    else if(cari<nim[mid]) return searchData(k,mid-1,nim,cari);
    else return searchData(mid+1,n,nim,cari);

};//pencarian

int main()
{
    int n,x,nim;
    cout << "Jumlah data mahasiswa yang ingin dimasukkan = ";
    cin >> n;
    RecData mahasiswa[n];
    int NIM[n]; // array

    cout << "jumlah nilai tes yang akan diinput =";
    cin >> x;
    cout << endl;

    for (int i=0;i<n;i++){ //perulangan
        cout << endl;
        cout << "Masukan Nama Mahasiswa :";
        cin.ignore();
        getline (cin, mahasiswa[i].nama);

        cout << "Masukan NIM Mahasiswa : ";
        cin >>NIM[i];

        cout << "Masukan Gender Mahasiswa (F/M): ";
        cin >> mahasiswa[i].gender;

        cout << "Masukan " << x << " nilai tes mahasiswa :";
        for (int j=0;j<x;j++){
            cin >> mahasiswa[i].nilai[j];
        }

        mahasiswa[i].rata2=average(x-1,mahasiswa[i].nilai);
    }

     for(int a=1;a<n;a++){
        for(int b=0;b<n-a;b++){
            if(NIM[b]>NIM[b+1]){
                swap (mahasiswa[b],mahasiswa[b+1]);
                swap (NIM[b],NIM[b+1]);
            }
        }
    }//sorting berdasarkan NIM

    int action;
    while (action!=4){
        menu();
        cin >> action;

        switch (action){ //percabangan
        case 1:
            {cout << "Masukan NIM mahasiswa yang ingin dicari = ";
            cin >> nim;

            int index=searchData(0,n,NIM,nim);
            if(index==-1){
                cout << "Data mahasiswa tidak dapat ditemukan" << endl;
                cout << endl;}

            else {
                cout << setw(7) << left << "Nama" << ": " << mahasiswa[index].nama << endl;
                cout << setw(7) << left << "NIM" << ": " << NIM[index] << endl;
                cout << setw(7) << left << "Gender" << ": ";
                if (mahasiswa[index].gender=='F') cout << "Perempuan";
                else cout << "Laki-laki";
                cout << endl;
                cout <<  "Rata-rata nilai" << ": " << mahasiswa[index].rata2 << endl;
            }
            }
            break;
        case 2:
            {int total_f=0,total_m=0;
            cout << "No |         Nama            | Gender | Rata-Rata Nilai |"<< endl;
            for (int i=0;i<n;i++){
                cout << setw(3) << right << i+1 <<"|" << setw(25) << left << mahasiswa[i].nama << "|" << setw(8) << left << mahasiswa[i].gender << "|" << setw(17) << mahasiswa[i].rata2 << "|" << endl;
                if (mahasiswa[i].gender=='F') total_f++;
                else total_m++;
            }
            cout << endl;
            cout << "Total Mahasiswa Laki-Laki : " << total_m<< endl;
            cout << "Total Mahasiswa Perempuan : " << total_f<<endl;
            cout << "Total                     : " << total_f+total_m << endl;}
            break;
        case 3:
           {
            cout << "Masukan NIM Mahasiswa yang ingin diubah datanya : ";
            cin >> nim;
            int index=searchData(0,n,NIM,nim);
            if(index==-1){
                cout << "Data mahasiswa tidak dapat ditemukan" << endl;
                cout << endl;
            }
            else{
                cout << "Silahkan input perubahan data" << endl;
                cout << "Masukan NIM Mahasiswa :";
                cin >> NIM[index];
                cout << "Masukan Nama Mahasiswa :";
                cin >> mahasiswa[index].nama;
                cout << "Masukan Gender Mahasiswa (F/M):";
                cin >> mahasiswa[index].gender;
                cout << "Masukan " << x << " nilai :";
                for (int i=0;i<x;i++){
                    cin >> mahasiswa[index].nilai[i];
                }
                cout << "Data mahasiswa berhasil diubah!" << endl;
                cout << endl;
            }
           }
            break;
        case 4:
            cout << "Program ditutup"<< endl;
            break;
        default:
            cout << "Kode Tindakan tidak valid" << endl;
        }
    }
}
