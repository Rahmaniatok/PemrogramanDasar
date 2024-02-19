#include <iostream>
using namespace std;

int main (){
int i, N, K;
cin >> N;
cin >> K;

for (i=0; i<K - (N%K); i++){
    cout << N/K << " ";
}

for (i=0; i<N%K; i++){
    cout << N/K + 1 << " ";
}

return 0;
}
