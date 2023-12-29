#include <iostream>
using namespace std;

struct makanan{
  int harga;
  int jumVit;
  int jenisVit[];
} ;

int main(){
    short n, m, k;
    cin >> n >> m >> k;
    makanan makananku[m];
    for(int i=0; i<m; i++){
        int harga;
        cin >> harga;
        makananku[i].harga = harga;
    }
    for(int i=0; i<m; i++){
        int jumVit;
        cin >> jumVit;
        makananku[i].jumVit = jumVit;
        for (int j=0; j<jumVit; j++){
            int jenisVit;
            cin >> jenisVit;
            makananku[i].jenisVit[j] = jenisVit;
        }
    }
    return 0;

}