#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int array[N];
    for(int i=0; i<N; i++){
        cin>>array[i];
    }
    for(int i=0; i<N; i++){
        int j=1;
        int k=0;
        while(j*j<=array[i]){
            if(array[i]%j==0){
                k++;
            }
            if(k>2){
                cout << "BUKAN" <<endl;
                break;
            }
            j++;
        }
        if(j*j>array[i]){
            cout<<"YA"<<endl;
            continue;
        }
    }
    return 0;
}