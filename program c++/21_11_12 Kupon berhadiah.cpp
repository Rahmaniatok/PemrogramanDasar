#include <iostream>
using namespace std;
struct KetKupon {
long long nilai;
long selisih;
long SelisihPositif;
};

int main(){
int N,i,j;
long long NilaiMurni, pemenang;
KetKupon temp;
cin >> N;
cin >> NilaiMurni;
KetKupon kupon[N];
for (i=0;i<N;i++){
    cin >> kupon[i].nilai;
    kupon[i].selisih = NilaiMurni-kupon[i].nilai;
    if (kupon[i].selisih<0){
        kupon[i].SelisihPositif = - kupon[i].selisih;
    } else {
        kupon[i].SelisihPositif = kupon[i].selisih;
    }
}
for (j=1;j<N;j++){
    i=j-1;
    temp.SelisihPositif=kupon[j].SelisihPositif;
    while (kupon[i].SelisihPositif>temp.SelisihPositif && i>=0){
        kupon[i+1]=kupon[i];
        i--;
    }
    kupon[i+1]=temp;
}
if (kupon[0].SelisihPositif==kupon[1].SelisihPositif){
    if(kupon[0].selisih>kupon[1].selisih){
        pemenang = kupon[0].nilai;
    } else {
        pemenang = kupon[1].nilai;
    }
} else {
    pemenang = kupon[0].nilai;
}
cout << pemenang;
}
