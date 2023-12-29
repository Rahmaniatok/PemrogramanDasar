#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    long arr[N];
    long selisih = 1000001;
    int index1, index2;
    for(int i=0; i<N; i++){
        cin >> arr[i];
        if(selisih > abs(arr[i]-X)){
            selisih = abs(arr[i]-X);
            index1 = i;            
        } else if(selisih == abs(arr[i]-X)){
            index2 = i;
        }
    }
    if ((arr[index1] > arr[index2]) && (abs(arr[index1]-X) == abs(arr[index2]-X))){
        cout << arr[index2] << endl << arr[index1];
    } else if ((arr[index1] < arr[index2]) && (abs(arr[index1]-X) == abs(arr[index2]-X))){
        cout << arr[index1] << endl << arr[index2];
    } else {
        cout << arr[index1];
    }
    return 0;
}