#include<iostream>
using namespace std;

int main(){
    short N;
    cin >> N;
    int masukan;
    int terbesar = -100000;
    int terkecil = 100000;
    for (int i=0; i<N; i++){
        cin >> masukan;
        if (terkecil > masukan){
            terkecil = masukan;
        }
        if (terbesar < masukan){
            terbesar = masukan;
        }
    }
    cout << terbesar << " " << terkecil;
    return 0;
}