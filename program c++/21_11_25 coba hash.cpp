#include <iostream>
using namespace std;

int main(){
int n, i, j, indeks, temp;
int data[100];
bool terisi[100]={false};
cout << "Masukkan banyak data yang akan di input: "; cin >> n;
for (i=0;i<n;i++){
    cout << "Masukkan data ke-" << i+1 << ": "; cin >> temp;
    for (j=temp%n;j<n;j++){
        if (terisi[j]==false){
        data[j] = temp;
        terisi[j] = true;
        break;
        }
    }
    if (j==n){
        for (j=0;j<temp%n;j++){
            if (terisi[j]==false){
            data[j] = temp;
            terisi[j]=true;
            break;
            }
        }
    }
}
for (i=0;i<n;i++){
    cout << i << "    " << data[i] <<endl;
}
return 0;
}
