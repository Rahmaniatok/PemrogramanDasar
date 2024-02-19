#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (){
long n,i;
cout<<"Masukkan banyak data yang akan diurutkan: ";
cin>>n;
long data[n];
srand(time(0));

for (i=0;i<n;i++){
    data[i]=rand()%n;
}
time_t start, finish;
start = clock();
std::sort(data,data+n);
finish = clock();
cout << "\nWaktu running: "<< (double)(finish-start)/CLOCKS_PER_SEC << "detik\n";
for (i=0;i<n;i++){
    cout<<data[i]<<" ";
}
cout<<endl;
}
