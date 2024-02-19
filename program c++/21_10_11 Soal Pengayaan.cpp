#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
struct karung {
int berat;
int harga;
double hargaperkilo;
};

int main (){
long N, X, i, j, beratsementara;
double harga;
karung temp;
cin >> N;
cin >> X;
if (N<1||N>1000||X<1||X>100000){
    goto akhir;
} else {
karung beras[N];
for(i=0;i<N;i++){
    cin >> beras[i].berat;
    if (beras[i].berat<1||beras[i].berat>1000){
        goto akhir;
    }
}
for(i=0;i<N;i++){
    cin >> beras[i].harga;
    if (beras[i].harga<1||beras[i].harga>1000){
        goto akhir;
    }
    beras[i].hargaperkilo = (double) beras[i].harga/beras[i].berat;
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
cout << setiosflags(ios::fixed);
cout << setprecision(5) << harga;
}
akhir :
return 0;
}
