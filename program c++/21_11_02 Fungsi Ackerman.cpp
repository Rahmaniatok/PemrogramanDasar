#include <iostream>
using namespace std;
long FungsiAckerman(long m, long n){
long hasil;
if (m==0){
    return hasil = n+1;
} else if (m!=0&&n==0){
    return hasil = FungsiAckerman(m-1,1);
} else {
    return hasil = FungsiAckerman(m-1,FungsiAckerman(m,n-1));
}
}
int main(){
long m, n;
cout<<"Masukkan m: ";
cin>>m;
cout<<"masukkan n: ";
cin>>n;
cout<<"Hasil fungsi Ackerman: "<<FungsiAckerman(m,n)<<endl;
}
