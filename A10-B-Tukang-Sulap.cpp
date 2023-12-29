#include<iostream>
using namespace std;

void tukar(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
}

int main(){
    int N;
    cin >> N;
    int A[N], B[N];
    for(int i=0; i<N;i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        cin >> B[i];
    }
    int T;
    cin >> T;
    char baris1, baris2;
    for (int i=0; i<T; i++){
            int x, y;
        cin >> baris1;
        cin >> x;
        cin >> baris2;
        cin >> y;
        if(baris1=='A'){
            if(baris2=='A'){
                tukar(A[x-1], A[y-1]);
            } else {
                tukar(A[x-1], B[y-1]);
            }
        } else {
            if(baris2=='A'){
                tukar(B[x-1], A[y-1]);
            } else {
                tukar(B[x-1], B[y-1]);
            }
        }
    }
    for(int i=0; i<N;i++){
        cout << A[i] << " ";
    }
    cout << endl;
    for(int i=0; i<N; i++){
        cout << B[i] << " ";
    }
    return 0;
}