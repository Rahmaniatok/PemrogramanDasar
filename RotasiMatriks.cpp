#include<iostream>
using namespace std;

int main(){
    short N, M;
    cin >> N >> M;
    short arr[N][M];
    for (short i=0; i<N; i++){
        for(short j=0; j<M; j++){
            cin >> arr[i][j];
        }
    }
    for (short i=0; i<M; i++){
        for(short j=N-1; j>=0; j--){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}