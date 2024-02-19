#include <iostream>
using namespace std;

int main (){
int angka,tmp,satuan;
cout<<"Masukkan bilangan: ";
cin>>angka;
tmp=0;
while(angka>0){
    satuan=angka%10;
    tmp=tmp+satuan;
    angka=angka/10;
}
cout<<tmp;
return 0;
}
