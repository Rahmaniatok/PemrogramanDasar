#include<iostream>
#include<string>
using namespace std;

int m[128][128];
int nJawaban;
string jawaban[128*128];

bool homogen(int r, int c, int k){
    int val = m[r][c];
    for(int i=r; i<r+k; i++){
        for(int j=c; j<c+k; j++){
            if(m[i][j] != val){
                return false;
            }
        }
    }
    return true;
}

void quadtree(int r, int c, int k, string s){
    if(homogen(r, c, k)){
        if(m[r][c] == 1){
            jawaban[nJawaban] = "1" + s;
            nJawaban++;
        }
    } else {
        quadtree(r, c, k/2, s+"0");
        quadtree(r, c+(k/2), k/2, s+"1");
        quadtree(r+(k/2), c, k/2, s+"2");
        quadtree(r+(k/2), c+(k/2), k/2, s+"3");
    }
}

int main(){
    int r, c;
    cin >> r >> c;

    int maxRc = max(r, c);
    int pow2 = 1;
    while(pow2 < maxRc){
        pow2 *= 2;
    }

    for(int i=0; i<pow2; i++){
        for(int j=0; j<pow2; j++){
            m[i][j] = 0;
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> m[i][j];
        }
    }

    nJawaban = 0;
    quadtree(0, 0, pow2, "");
    cout << nJawaban << endl;
    for(int i=0; i<nJawaban; i++){
        printf("%s\n", jawaban[i].c_str());
    }
    return 0;
}