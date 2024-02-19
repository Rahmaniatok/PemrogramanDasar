#include <iostream>
using namespace std;
struct DataAnak {
int berat;
int tinggi;
};

int main(){
int N,i,JumlahBerat=0,JumlahTinggi=0,BeratLebih=0,TinggiLebih=0;
double Rata2Berat,Rata2Tinggi;
cin >> N;
DataAnak anak[N];

for (i=0;i<N;i++){
    cin >> anak[i].berat;
    cin >> anak[i].tinggi;
    JumlahBerat += anak[i].berat;
    JumlahTinggi += anak[i].tinggi;
}
Rata2Berat = (double) JumlahBerat/N;
Rata2Tinggi = (double) JumlahTinggi/N;

for(i=0;i<N;i++){
    if (anak[i].berat>Rata2Berat){
        BeratLebih++;
    }
    if (anak[i].tinggi>Rata2Tinggi){
        TinggiLebih++;
    }
}
cout << "Banyak anak dengan berat badan di atas rata-rata: " << BeratLebih << endl;
cout << "Banyak anak dengan tinggi di atas rata-rata: " << TinggiLebih << endl;

return 0;
}
