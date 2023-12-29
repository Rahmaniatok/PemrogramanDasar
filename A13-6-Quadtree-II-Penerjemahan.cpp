#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int N;
    cin >> N;
    string kode[N];
    for(int i=0; i<N; i++){
        cin >> kode[i];
    }
    int r, c;
    cin >> r >> c;
    int maxRc;
    if(r > c){ 
        maxRc = r;
    } else {
        maxRc = c;
    }
    int pow2 = 1;
    while(pow2 < maxRc){
        pow2 *= 2;
    }
    int m[pow2][pow2];
    for(int i=0; i<pow2; i++){
        for(int j=0; j<pow2; j++){
            m[i][j] = 0;
        }
    }
    for(int i=0; i<N; i++){
        int x=0;
        int y = 0;
        int kedalaman = pow2;
        for(int j=1; j<kode[i].length(); j++){
            kedalaman = kedalaman/2;
            if(kode[i][j] == '1'){
                x += kedalaman;
            } else if(kode[i][j] == '2'){
                y += kedalaman;
            } else if(kode[i][j] == '3'){
                x += kedalaman;
                y += kedalaman;
            }
        }
        for(int k=0; k<kedalaman; k++){
            for(int l=0; l<kedalaman; l++){
                m[y+k][x+l] = 1;
            }
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}