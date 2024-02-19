#include <bits/std++.h>
using namespace std;

int average (int data[]){
int i;
float jumlah = 0;
for (i=0;i<10;i++){
    jumlah += data[i];
}
return jumlah/10;
}

void selectionSort (int data1[],int data2[]){
int Min,temp,i,j,n=10;
for (i=0;i<n;i++){
    Min=i;
    for(j=i+1;j<n;j++){
        if (data1[j]<data1[Min]){
            Min=j;
        }
    }
    temp=data1[i];
    data1[i]=data1[Min];
    data1[Min]=temp;
}
for (i=0;i<10;i++){
    data2[i]=data2[i];
}
}

int median (int data[]){
return (data[4]+data[5])/2;
}

int main(){
int a[]={5,2,5,3,8,7,6,9,1,4};
int b[]={0,0,0,0,0,0,0,0,0,0};
int c[]={0,0,0,0,0,0,0,0,0,0};
float avg;
float med;
int i;

avg = average(a);
cout << avg;

selectionSort (a,b);
for (i=0;i<10;i++){
    cout << endl << b[i];
}
med = median(b);
cout << med;
}
