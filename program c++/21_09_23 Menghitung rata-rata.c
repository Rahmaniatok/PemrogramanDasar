#include <iostream>
using namespace std;

int main (){
long N, bilangan[1000],jumlah,rata2,i;

cout << "Masukan banyak bilangan :"
cin>> N;

jumlah=0;
i=0
for (i=0;i<N;i++){
    cout << "Masukan bilangan ke-"<<i+1<< " :"<<endl;
    cin >> bilangan[i]
    jumlah += bilangan[i];
}
rata2 = jumlah/N;
cout << "Rata-rata dari bilangan-bilangan tersebut adalah "<< rata2;
return 0;
}
