#include <iostream>
using namespace std;

int main () {
int i,n,m;
char a = '*';
cout << "Masukkan jumlah baris (lebih baik genap): ";
cin >> n;

i = n/2;
m = n/2;

for (i=n/2;i>=1;i--){
    for (m=i;m>=1;m--){
    cout << a;
    }
    cout <<endl;
    }
for (i=1;i<=n/2;i++){
    for (m=1;m<=i;m++){
    cout <<a;
    }
    cout<<endl;
}
return 0;
}
