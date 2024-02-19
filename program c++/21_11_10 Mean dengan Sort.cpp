#include <iostream>
using namespace std;

int main(){
long N, i, j, temp;
double median;
cout << "Masukkan jumlah data yang Anda inginkan: ";
cin >> N;
double data[N];
cout << "Masukkan data: ";
for (i=0;i<N;i++){
    cin >> data[i];
}
for (j=1;j<N;j++){
    i = j-1;
    temp = data[j];
    while (data[i]>temp && i>=0){
        data[i+1] = data[i];
        i--;
    }
    data[i+1] = temp;
}
if (N%2==0){
    median = (data[N/2 - 1] + data[N/2])/2;
} else {
    median = data[N/2];
}
cout << "\nMedian dari data tersebut: " << median << endl;
return 0;
}
