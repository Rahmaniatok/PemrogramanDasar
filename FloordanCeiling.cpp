#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float N;
    cin >> N;
    if (N-trunc(N) != 0){
        if (N >= 0){
            cout << trunc(N) << " " << trunc(N)+1;
        } else if(N > -1 && N < 0){
            cout  << trunc(N)-1 << " 0";
        } else {
            cout << trunc(N)-1 << " " << trunc(N);
        }
    }  else{
        cout << trunc(N) << " " << trunc(N);
    }
    return 0;
}