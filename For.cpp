#include<iostream>
using namespace std;

int main() {
    int N;
    int total = 0; 
    int bebek;
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> bebek;
        total += bebek;
    }
    cout << total;
    return 0;
}