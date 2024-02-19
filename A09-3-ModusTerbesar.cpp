#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int N;

cin >> N;

int arr[N+1];
int n = sizeof(arr) / sizeof(arr[0]);

for (int i=1; i<=N; i++){
    arr[i]=0;
}

for (int i=1; i<=N; i++){
    int number;
    cin >> number;
    arr[number]++;
}

for (int i=1; i<=N; i++){
    cout<< arr[i] << " ";
}

cout << *max_element(arr, arr + n);
return 0;

}

