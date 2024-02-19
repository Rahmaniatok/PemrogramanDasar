// fibbnaci

#include <iostream>
using namespace std;

int main () {
int x,y,z,i,n;

cout << "Mau berapa suku?";
cin >> n;

x = 0;
y = 1;

if (n==1){
    cout << 1;

} else {
    cout << " "<< 1;
    for (i=1;i<=n;i++){
    z = x + y;
    x = y;
    y = z;

    cout << " " << z;
}
}
return 0;
}
