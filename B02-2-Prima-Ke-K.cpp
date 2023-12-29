#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int K[T];
    for(int i=0; i<T; i++){
        cin >> K[i];
    }
    int* maxElement = std::max_element(K, K + T);
    int max = *maxElement;

    int MAXVALUE = 1000000;
    bool prima[MAXVALUE];

    for(int i=0; i<MAXVALUE; i++){
        prima[i]=true;
    }

    for(int i=2; i<MAXVALUE; i++){
        if(prima[i]==false){
            continue;
        } else {
            for(int j=2*i; j<MAXVALUE; j+=i){
                prima[j]=false;
            }
        }
    }
    int count=1;
    int himpunanPrima[max+1];
    for(int i=2; i<MAXVALUE; i++){
        if(prima[i]==true && count<=max){
            himpunanPrima[count] = i;
            count++;
        }
    }
    for (int i=0; i<T; i++){
        cout << himpunanPrima[K[i]] << endl;
    }
    return 0;
}