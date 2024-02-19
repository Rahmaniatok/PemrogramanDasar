#include <iostream>
using namespace std;
int data[]=

void InsertionSortDescending(long data[],long n){
long i,j,temp,sum=0;
for (j=1;j<n;j++){
    i=j-1;
    temp=data[j];
    while (data[i]<temp && i>=0){
        data[i+1]=data[i];
    i--;
    sum++;
    }
    data[i+1]=temp;
}
cout<<endl;
}

int main(){
}
