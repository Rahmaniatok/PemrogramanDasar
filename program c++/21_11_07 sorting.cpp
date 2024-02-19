#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void InsertionSortAscending(long data[],long n){
time_t start, finish;
time (&start);
long i,j,temp;
for (j=1;j<n;j++){
    i=j-1;
    temp=data[j];
    while (data[i]>temp && i>=0){
        data[i+1]=data[i];
        i--;
    }
    data[i+1]=temp;
}
time(&finish);
cout << "\nWaktu running: "<< difftime(finish,start) << "detik\n";
for (i=0;i<n;i++){
    cout<<data[i]<<" ";
}
cout<<endl;
}

void InsertionSortDescending(long data[],long n){
time_t start, finish;
time (&start);
long i,j,temp;
for (j=1;j<n;j++){
    i=j-1;
    temp=data[j];
    while (data[i]<temp && i>=0){
        data[i+1]=data[i];
    i--;
    }
    data[i+1]=temp;
}
time(&finish);
cout << "\nWaktu running: "<< difftime(finish,start) << "detik\n";
for (i=0;i<n;i++){
    cout<<data[i]<<" ";
}
cout<<endl;
}

void SelectionSortAscending (long data[],long n){
time_t start, finish;
time (&start);
int Min,temp,i,j;
for (i=0;i<n;i++){
    Min=i;
    for(j=i+1;j<n;j++){
        if (data[j]<data[Min]){
            Min=j;
        }
    }
    temp=data[i];
    data[i]=data[Min];
    data[Min]=temp;
}
time(&finish);
cout << "\nWaktu running: "<< difftime(finish,start) << "detik\n";
for (i=0;i<n;i++){
    cout<<data[i]<<" ";
}
cout<<endl;
}

void SelectionSortDescending (long data[],long n){
time_t start, finish;
time (&start);
int Min,temp,i,j;
for (i=0;i<n;i++){
    Min=i;
    for(j=i+1;j<n;j++){
        if (data[j]>data[Min]){
            Min=j;
        }
    }
    temp=data[i];
    data[i]=data[Min];
    data[Min]=temp;
}
time(&finish);
cout << "\nWaktu running: "<< difftime(finish,start) << "detik\n";
for (i=0;i<n;i++){
    cout<<data[i]<<" ";
}
cout<<endl;
}

int main(){
long n,i,pilihan;
cout<<"Masukkan banyak data yang akan diurutkan: ";
cin>>n;
long data[n];
srand(time(0));

for (i=0;i<n;i++){
    data[i]=rand()%n;

}
cout<<"Silahkan pilih di antara menu berikut: ";
cout<<"\n 1. Mengurutkan data secara ascending menggunakan metode insertion sort.";
cout<<"\n 2. Mengurutkan data secara descending menggunakan metode insertion sort.";
cout<<"\n 3. Mengurutkan data secara ascending menggunakan metode selection sort.";
cout<<"\n 4. Mengurutkan data secara descending menggunakan metode insertion sort.";
cout<<"\n Pilihan Anda: ";
cin>>pilihan;

if (pilihan==1){
 InsertionSortAscending(data,n);
} else if (pilihan==2){
InsertionSortDescending(data,n);
} else if(pilihan==3){
SelectionSortAscending(data,n);
} else {
SelectionSortDescending(data,n);
}
}
