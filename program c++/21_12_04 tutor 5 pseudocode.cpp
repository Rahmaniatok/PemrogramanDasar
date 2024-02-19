#include <iostream>
using namespace std;

struct DataKata {
string kata;
int jumlah;
};

void InsertionSortAscending(string kata[],int n){
int i,j,k;
string temp;
for (j=1;j<n;j++){
    i=j-1;
    temp=kata[j];
        while (kata[i][0]>temp[0] && i>=0){
            kata[i+1]=kata[i];
            i--;
        }
        kata[i+1]=temp;
    }
}

int main(){
int i,j,n;
cout << "Masukkan jumlah kata: ";
cin >> n;
string kata[n];
DataKata ketkata[n];

for(i=0;i<n;i++){
    cin>>kata[i];
}

for(i=0;i<n;i++){
    ketkata[i].jumlah = 0;
}
InsertionSortAscending(kata,n);
for(i=0;i<n;i++){
    cout << kata[i] << endl;
}
return 0;
}
