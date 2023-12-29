#include<iostream>
using namespace std;

int N;
int catat[9];
bool pernah[9];
bool zigzag;

void tulis(int kedalaman) {
    if (kedalaman >= N) {
        zigzag = true;
        for (int i=1; i<N-1; i++){
            bool kondisi1 = catat[i]>catat[i-1] && catat[i]>catat[i+1];
            bool kondisi2 = catat[i]<catat[i-1] && catat[i]<catat[i+1];
            if (!(kondisi1||kondisi2)){
                zigzag = false;
            }
        }
        if(zigzag){
            for (int i = 0; i < N; i++) {
                cout << catat[i];
            }
        cout << endl;
        }
    } else {
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) { // i belum pernah?
                pernah[i] = true; // Gunakan
                catat[kedalaman] = i; // Catat di sini
                tulis(kedalaman + 1);
                pernah[i] = false; // Selesai menggunakan
            }
        }
    }
}

int main(){
    cin >> N;
    tulis(0);
    return 0;
}