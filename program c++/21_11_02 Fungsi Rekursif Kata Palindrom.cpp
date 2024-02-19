#include <iostream>
using namespace std;
int CekPalindrom(string kata, int IndeksBesar, int IndeksKecil=0){
if ((kata[IndeksKecil]!=kata[IndeksBesar])&&(IndeksKecil<IndeksBesar)){
    return 0;
} else if (IndeksKecil>=IndeksBesar){
    return 1;
} else {
    return CekPalindrom(kata,IndeksBesar-1,IndeksKecil+1);
}
}

int main(){
string kata;
int IndeksBesar;
cout<<"Masukkan kata: ";
cin>>kata;
IndeksBesar=kata.length()-1;
if(CekPalindrom(kata,IndeksBesar)==0){
    cout<<"Kata tersebut bukan palindrom."<<endl;
} else {
    cout<<"Kata tersebut adalah palindrom."<<endl;
}
return 0;
}
