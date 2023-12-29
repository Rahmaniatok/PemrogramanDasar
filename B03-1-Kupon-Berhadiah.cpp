#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    int arr[N];
    int selisih = 400001;
    int index;
    for(int i=0; i<N; i++){
        cin >> arr[i];
        if(selisih > abs(arr[i]-X)){
            selisih = abs(arr[i]-X);
            index = i;
        } else if(selisih == abs(arr[i]-X) && (arr[i]<X)){
            index = i;
        }
    }
    cout << arr[index];
    return 0;
}