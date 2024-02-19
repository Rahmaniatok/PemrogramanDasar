#include <iostream>
using namespace std;

int main (){
long n,p,q;
long a[1000000];
long b[1000000];

cout << "Insert the length of array:"<<endl;
cin<< n;

cout << "Enter elements of array 1:"<<endl;
for (i=0;i<n;i++){
    cout << "Enter element a"<< i+1<< " : ";
    cin >> a[i];
}
cout<<endl;
cout << "Enter elements of array 2:"<<endl;
for (i=n;i>0;i--){
    cout << "Enter element b"<< i+1<< " : ";
    cin >> b[n-i];
}
cout << "Intersection:";
for (p=0;p<n;p++){
    for (p=0;p<n;q++){
        if (a[p]==b[q]){
            cout << a[p];
        }
}
}
