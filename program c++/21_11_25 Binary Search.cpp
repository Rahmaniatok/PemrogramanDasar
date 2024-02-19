#include <iostream>
using namespace std;
struct DataMahasiswa{
long nim;
string NamaDepan;
string NamaBelakang;
int nilai;
};

DataMahasiswa mhs[6]{
{1905112, "Priscilla", "Christy", 95},
{1905236, "Charissa", "Sherry", 80},
{1906889, "Gabriella", "Widyaningsih", 75},
{1906762, "Jessica", "Yusiawati", 98},
{1908009, "Monica", "Amanda", 60},
{1908010, "Hanny", "Muliamartana", 85}
};

void SortAscending(DataMahasiswa mhs[],int n){
int i,j;
DataMahasiswa temp;
for (j=1;j<n;j++){
    i=j-1;
    temp=mhs[j];
    while (mhs[i].nilai>temp.nilai && i>=0){
        mhs[i+1]=mhs[i];
        i--;
    }
    mhs[i+1]=temp;
}
for (i=0;i<n;i++){
    cout << i+1 << ".NIM  : " << mhs[i].nim <<endl;
    cout << "  Nama : " << mhs[i].NamaDepan << " " << mhs[i].NamaBelakang<<endl;
    cout << "  Nilai: " << mhs[i].nilai<<endl;
}
cout<<endl;
}

void BinarySearch(DataMahasiswa mhs[],int akhir, int key){
int i, mid, awal = 0;
while (awal<=akhir){
    mid = (awal+akhir)/2;
    if (mhs[mid].nilai  <key){
        awal = mid + 1;
    } else if (mhs[mid].nilai == key){
        mhs[mid].NamaDepan = "Rahmania";
        mhs[mid].NamaBelakang = "";
        cout << "Selamat, nama mahasiswa dengan nilai 95 telah diganti!\n";
        for (i=0;i<6;i++){
        cout << i+1 << ".NIM  : " << mhs[i].nim <<endl;
        cout << "  Nama : " << mhs[i].NamaDepan << " " << mhs[i].NamaBelakang<<endl;
        cout << "  Nilai: " << mhs[i].nilai<<endl;
        }
        break;
    } else if (mhs[mid].nilai > key){
        akhir = mid - 1;
    }
}
}

int main (){
int key;
SortAscending(mhs,6);
BinarySearch(mhs,5,95);
}
