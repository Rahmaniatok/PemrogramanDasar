#include<iostream>
using namespace std;

int main(){
    short N,M,P;
    cin >> N >> M >> P;
    short arr1[N][M];
    short arr2[M][P];
    for (int i=0; i<N ; i++){
        for(int j=0; j<M; j++){
            cin >> arr1[i][j];
        }
    }
    for (int i=0; i<M ; i++){
        for(int j=0; j<P; j++){
            cin >> arr2[i][j];
        }
    }
    for (int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            int jumlah=0;
            for(int k=0; k<M; k++){
                jumlah += arr1[i][k]*arr2[k][j];
            }
            cout << jumlah << " ";
        }
        cout << endl;
    }
    return 0;
}