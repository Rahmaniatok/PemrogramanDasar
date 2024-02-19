#include <iostream>
using namespace std;

int main () {
long tinggi, i,j,k;

cout << "Masukan tinggi piramida : ";
cin >> tinggi;

i=tinggi;
j=i;
k =((tinggi-i)*2)+1;
for (i=tinggi;i>0;i--){
    for (j=i;j>1;j--){
        cout << "  ";
    }
    for (k=0;k<((tinggi-i)*2)+1;k++){
        cout << "* ";
    }
    cout<< endl;
}
return 0;
}
