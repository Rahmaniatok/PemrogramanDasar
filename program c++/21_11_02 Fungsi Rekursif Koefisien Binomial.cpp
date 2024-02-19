#include <iostream>
using namespace std;
long KoefisienBinomial(long n, long k){
long koefisien;
if ((k==0)||(k==n)){
    return koefisien = 1;
} else {
   return koefisien = KoefisienBinomial(n-1,k-1)+KoefisienBinomial(n-1,k);
}
}

int main (){
long n, k;
cout<<"Masukkan n: ";
cin>>n;
cout<<"Masukkan k: ";
cin>>k;
cout<<"Koefisien binomial adalah "<<KoefisienBinomial(n,k)<<"."<<endl;
}
