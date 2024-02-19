#include <iostream>
using namespace std;

int main (){
long a[2][2];
long b[2][2];

cout << "Enter elements of matrix 1:"
for (i=0;i<=1;i++){
    for (j=o;j<=1;j++){
    cout << "Enter element a"<<i<<j<<" : ";
    cin>> a[i][j];
    }
}
cout<<endl;
cout << "Enter elements of matrix 2:"
for (i=0;i<=1;i++){
    for (j=o;j<=1;j++){
    cout << "Enter element b"<<i<<j<<" : ";
    cin>> b[i][j];
    }
}
cout<<endl;
cout<<"Matrix 1";
cout << "  "<<a[0][0]<<"  "<<a[0][1]<<endl;
cout<<"  "<<a[1][0]<<"  "<<a[1][1]<<endl;

cout<<endl;
cout<<"Matrix 2";
cout << "  "<<b[0][0]<<"  "<<b[0][1]<<endl;
cout<<"  "<<b[1][0]<<"  "<<b[1][1]<<endl;

cout<<endl;
cout<<"Output Matrix:"<<endl;
cout<<"  "<<a[0][0]*b[0][0]+a[0][1]*b[1][0]<<"  "<<a[0][0]*b[0][1]+a[0][1]*b[1][1]<<endl;
cout<<"  "<<a[1][0]*b[0][0]+a[1][1]*b[1][0]<<"  "<<a[1][0]*b[0][1]+a[1][1]*b[1][1]<<endl;

return 0;
}
