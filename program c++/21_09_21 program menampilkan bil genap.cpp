#include <iostream>
using namespace std;

int main(){
long batas, i;

cout << "Masukan batas yang diinginkan :";
cin >> batas;
i=batas;

if (batas < 0){
    cout << "Maaf, batas harus positif.";
} else {
    for (i=batas;i>=0;i--){
        if (i%2==0){
        cout<< i<< " ";
        }
}
}
return 0;
}
