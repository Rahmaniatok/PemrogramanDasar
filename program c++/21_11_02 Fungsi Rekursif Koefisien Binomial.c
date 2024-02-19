#include <iostream>
using namespace std;
long KoefisienBinomial(long n, long k){
long koefisien = 1;
if ((k==0)||(k==n)){
    return koefisien = 1;
} else {
   return koefisien = (n-k)/n*KoefisienBinomial(n,k-1)
}
}
int main (){
long n, k;
cout<<"Masukkan n: ";
cin>>n;
cout<<"Masukkan k: ";
cin>>k;
cout<<endl<<KoefisienBinomial(n,k)<<endl;
}
