#include <iostream>
using namespace std;

int main (){
int N, K, i;

cout << "Masukan nilai maksimal : ";
cin >> N;
cout << "Masukan batas bilangan yang diloncati kelipatannya : ";
cin >> K;
i=1;

if ((N<1)||(N>100)||(K<1)||(K>N)){
    cout << "Maaf, bilangan yang Anda masukan salah.";
} else {
    for (i=1;i<=N;i++){
        if (i%K==0){
        cout << "* ";
        } else {
        cout << i<<" ";
        }
}
}
return 0;
}
