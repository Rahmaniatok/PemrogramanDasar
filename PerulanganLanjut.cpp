#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int angka = 0;
    for (int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            cout << angka;
            angka++;
            if(angka == 10){
                angka = 0;
            }
        }
        cout << endl;
    }
    return 0;
}