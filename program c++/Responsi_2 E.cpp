#include <iostream>
using namespace std;

int main(){
long i,j,n;
cin>>n;
for (i=0;i<n;i++){
    cout <<"*";
    if (i==0||i==n/2||i==n-1){
        for (j=0;j<n-1;j++){
        cout << "*";
    }
    }
    if (i>0&&i<n/2){
        for (j=0;j<n-2;j++){
        cout << " ";
    }
    cout << "*";
    }
    cout << endl;
}
return 0;
}
