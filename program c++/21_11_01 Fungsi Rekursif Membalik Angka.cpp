#include <iostream>
using namespace std;
string balik(string bilangan,int IndeksBesar,int IndeksKecil=0){
char temp;
if (IndeksKecil<IndeksBesar){
    temp=bilangan[IndeksKecil];
    bilangan[IndeksKecil]=bilangan[IndeksBesar];
    bilangan[IndeksBesar]=temp;
    return balik(bilangan,IndeksBesar-1,IndeksKecil+1);
} else {
    return bilangan;
}
}

int main(){
string bilangan;
int IndeksBesar;
cout<<"Masukkan bilangan: ";
cin>>bilangan;
IndeksBesar=bilangan.length()-1;
cout<<"Kebalikan bilangan tesebut adalah: "<<balik(bilangan,IndeksBesar)<<endl;
return 0;
}
