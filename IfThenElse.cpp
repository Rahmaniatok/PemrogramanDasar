#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N > 0){
        cout << "positif";
    } else if(N == 0){
        cout << "nol";
    } else {
        cout << "negatif";
    }
    return 0;
}