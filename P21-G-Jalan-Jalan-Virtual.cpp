#include<iostream>
#include<cmath>
using namespace std;

void solve(int langkah){
    long x=0;
    long y=0;
    int n=(-1+sqrt(1+8*langkah))/2;
    int Sn = (n*(n+1))/2;
    int iterasiX = ceil((floor(n))/2);
    int iterasiY = n/2;

    // cout << n << " " << Sn <<" " << iterasiX << " " << iterasiY << endl;

    for(int i=1; i<=iterasiX; i++){
        int kali = pow(-1, (i%2+1));
        x = x + (2*i - 1)*kali;
    }

    for(int i=1; i<=iterasiY; i++){
        int kali = pow(-1, (i%2+1));
        y = y + (2*i)*kali;
    }
    int sisa=langkah-Sn;
    if(n%4==1){
        y=y+sisa;
    } else if(n%4==3){
        y= y-sisa;
    } else if(n%4==2){
        x = x-sisa;
    } else{
        x=x+sisa;
    }
    cout << x << " " << y << endl;
}

int main(){
    int N;
    cin >> N;
    long langkah[N];
    for(int i=0; i<N; i++){
        cin >> langkah[i];
    }
    for(int j=0; j<N; j++){
        solve(langkah[j]);
    }
    return 0;
}