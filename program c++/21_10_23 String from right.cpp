#include <iostream>
using namespace std;
char string_from_right (string st,int n);

int main(){
int n1;
string st1;
cout<<"Masukkan kata: ";
cin>>st1;
cout<<"Masukkan jumlah karakter yang akan diambil: ";
cin>>n1;
if (n1>st1.length()){
    cout<<"Maaf, jumlah karakter yang diambil maksimal sebanyak jumlah kata."<<endl;
} else {
    string_from_right(st1,n1);
    cout<<endl;
}
return 0;
}

char string_from_right (string st,int n){
int i;
for (i=st.length()-n;i<st.length();i++){
cout<<st[i];
}
}
