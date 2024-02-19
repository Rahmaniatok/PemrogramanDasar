#include <iostream>
using namespace std;

int main (){
long n, m, i;
long biner[1000000];

cout << "Insert a number :";
cin n;

for (i=n;i>0;i--){
    biner[n-i] = n%2;
    n = n/2;
}
for (m=0;m<n;m++){
    cout << biner[m];
}
return 0;
}
