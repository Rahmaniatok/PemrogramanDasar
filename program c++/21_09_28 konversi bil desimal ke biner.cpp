#include <iostream>
using namespace std;

int main (){
long n,i;
long biner[100000];

cout << "Insert a number : ";
cin >> n;

cout << "The result of number " << n << " in binary is :"<<endl;
i=0;
while (n>0) {
    biner[i]=n%2;
    n=n/2;
    i++;
}
do {
    cout << biner[i-1]<< " ";
    i--;
}while (i>0);
return 0;
}
