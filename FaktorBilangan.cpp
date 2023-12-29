#include<iostream>
using namespace std;

int main() {
    long N;
    cin >> N;
    int faktor[N/2];
    int urutan = 0;
    for (int i=1; i<=N/2; i++){
        if (N%i == 0){
            faktor[urutan] = i;
            urutan ++;
        }
    }
    cout << N << endl;
    for (int i=urutan-1; i>=0; i--){
        cout << faktor[i] << endl;
    }
}