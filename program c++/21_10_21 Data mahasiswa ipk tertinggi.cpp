#include <iostream>
using namespace std;
struct DataMahasiswa {
string NamaMahasiswa;
string ProgramStudi;
int TahunMasuk;
int TahunKeluar;
float IPK;
};

int main(){
int n,i,j;
string gelar;
DataMahasiswa temp;
cout<<"Masukkan jumlah mahasiswa: ";
cin>>n;
cout<<endl;
DataMahasiswa mahasiswa[n];

cout<<"==Mohon masukkan data mahasiswa=="<<endl;
for(i=0;i<n;i++){
    cout<<"Nama mahasiswa: ";
    cin>>mahasiswa[i].NamaMahasiswa;
    cout<<"Program studi : ";
    cin>>mahasiswa[i].ProgramStudi;
    cout<<"Tahun masuk   : ";
    cin>>mahasiswa[i].TahunMasuk;
    cout<<"Tahun keluar  : ";
    cin>>mahasiswa[i].TahunKeluar;
    cout<<"IPK           : ";
    cin>>mahasiswa[i].IPK;
    cout<<endl;
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(mahasiswa[j].IPK<mahasiswa[i].IPK){
            temp=mahasiswa[i];
            mahasiswa[i]=mahasiswa[j];
            mahasiswa[j]=temp;
        }
    }
}

if(mahasiswa[0].IPK>=2.00&&mahasiswa[0].IPK<=2.74){
    gelar="Memuaskan";
} else if(mahasiswa[0].IPK>=2.75&&mahasiswa[0].IPK<=3.50){
    gelar="Sangat Memuaskan";
} else if(mahasiswa[0].IPK>=3.51&&mahasiswa[0].IPK<=4.00){
    if(mahasiswa[0].TahunKeluar-mahasiswa[0].TahunMasuk<=5){
        gelar="Cum Laude";
    } else if (mahasiswa[0].TahunKeluar-mahasiswa[0].TahunMasuk>5){
        gelar="Sangat Memuaskan";
    }
} else{
    gelar="-";
}

cout<<"************************************************"<<endl;
cout<<"Selamat! Mahasiswa dengan IPK tertinggi adalah: "<<endl;
cout<<"Nama mahasiswa: "<<mahasiswa[0].NamaMahasiswa<<endl;
cout<<"Program studi : "<<mahasiswa[0].ProgramStudi<<endl;
cout<<"Tahun masuk   : "<<mahasiswa[0].TahunMasuk<<endl;
cout<<"IPK           : "<<mahasiswa[0].IPK<<endl;
cout<<"Gelar         : "<<gelar<<endl;
}

