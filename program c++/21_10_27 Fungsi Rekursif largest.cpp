#include <iostream>
using namespace std;

int largest (int bilangan[],int IndeksBesar,int IndeksKecil=0){
int terbesar;
if (IndeksBesar!=IndeksKecil){
    if (bilangan[IndeksKecil]>=bilangan[IndeksBesar]){
        terbesar = bilangan[IndeksKecil];
        IndeksBesar--;
        largest(bilangan,IndeksBesar,IndeksKecil);
    } else {
        terbesar = bilangan[IndeksBesar];
        IndeksKecil++;
        largest(bilangan,IndeksBesar,IndeksKecil);
    }
} else {
    terbesar = bilangan[IndeksKecil];
    return terbesar;
}
}

int main (){
int IndeksBesar,i;
cout<<"Masukkan jumlah bilangan yang akan ditulis: ";
cin>>IndeksBesar;
int bilangan[IndeksBesar];
cout<<"Masukkan bilangan (diselingi spasi): ";
for (i=0;i<IndeksBesar;i++){
    cin>>bilangan[i];
}
cout<<"Bilangan terbesar adalah "<<largest(bilangan,IndeksBesar-1)<<"."<<endl;
}

