#include <iostream>
#include <iomanip>
using namespace std;

struct karung {
int berat;
int harga;
float hargaperkilo;
};

int main (){
int N, X, i, j, beratsementara;
float harga;
karung temp;
cin >> N;
cin >> X;
karung beras[N];
for(i=0;i<N;i++){
    cin >> beras[i].berat;
}
for(i=0;i<N;i++){
    cin >> beras[i].harga;
    beras[i].hargaperkilo = (float) beras[i].harga/beras[i].berat;
}
for (j=0;j<N;j++){
    i=j-1;
    temp=beras[j];
    while (beras[i].hargaperkilo<temp.hargaperkilo && i>=0){
        beras[i+1]=beras[i];
    i--;
    }
    beras[i+1]=temp;
}
i = 0;
harga = 0;
for (beratsementara=0;beratsementara<=X&&i<N;){
    if (beras[i].berat > X - beratsementara){
        beras[i].berat = X - beratsementara;
    }
    beratsementara = beratsementara + beras[i].berat;
    harga = harga + beras[i].hargaperkilo * beras[i].berat;
    i++;
}
cout << fixed << setprecision(5) << harga << endl;
return 0;
}
