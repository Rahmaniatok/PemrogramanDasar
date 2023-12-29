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
        int j=2;
        if(array[i]==1){
            cout <<"BUKAN" << endl;
            continue;
        }
        if(array[i]==2||array[i]==3){
            cout << "YA" << endl;
            continue;
        }
        while(j*j<=array[i]){
            if(array[i]%j==0){
                cout << "BUKAN"<<endl;
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