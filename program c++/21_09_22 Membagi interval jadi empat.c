#include <iostream>
using namespace std;

int main (){
int maks, n, i;

cout << "Masukan nilai maksimal : ";
cin >> maks;
cout << "Masukan batas bilangan yang digantikan kelipatannya : ";
cin >> n;

for (i=1;i<=maks;i++){
    if (i%n=0){
        cout << "* "
    } else {
        cout << "i "
    }
}
return 0;
}
