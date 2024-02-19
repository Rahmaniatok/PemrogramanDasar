#include <iostream>
using namespace std;

int main (){
long n,i,p,q;
long a[100000];
long b[100000];

cout << "Insert the length of array:"<<endl;
cin>> n;

cout<<endl;
cout << "Enter elements of array 1:"<<endl;
for (i=0;i<n;i++){
cout << "Enter element a"<< i+1<< " : ";
cin >> a[i];
}
cout<<endl;
cout << "Enter elements of array 2:"<<endl;
for (i=n;i>0;i--){
cout << "Enter element b"<< n-i+1 << " : ";
cin >> b[n-i];
}
cout<< endl;
cout << "Intersection:"<<endl;
for (p=0;p<n;p++){
    for (q=0;q<n;q++){
        if (a[p]==b[q]){
        cout << a[p]<<endl;
        }
}
}
return 0;
}
