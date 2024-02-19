#include <iostream>
using namespace std;
struct DataMahasiswa {
string student_id;
float midterm_score;
float finalexam_score;
float ratarata;
};

int main (){
DataMahasiswa mahasiswa[50];
int i,N;

cout<<"Masukkan jumlah mahasiswa: ";
cin>>N;

if(N>50){
cout<<"Maaf, jumlah mahasiswa maksimum 50 orang."<<endl;
} else {
    for(i=0;i<N;i++){
        cout<<"Masukkan ID Mahasiswa ke-"<<i+1<<": ";
        cin>>mahasiswa[i].student_id;
        cout<<"Masukkan nilai Ujian Tengah Semester: ";
        cin>>mahasiswa[i].midterm_score;
        cout<<"Masukkan nilai Ujian Akhir: ";
        cin>>mahasiswa[i].finalexam_score;
        cout<<endl;
}

cout<<"Hasil"<<endl;
    for(i=0;i<N;i++){
        mahasiswa[i].ratarata = (mahasiswa[i].midterm_score+mahasiswa[i].finalexam_score)/2;
        cout<<"ID Mahasiswa ke-"<<i+1<<": "<<mahasiswa[i].student_id<<endl;
        cout<<"Rata-rata: "<<mahasiswa[i].ratarata<<endl;
}
}
return 0;
}
