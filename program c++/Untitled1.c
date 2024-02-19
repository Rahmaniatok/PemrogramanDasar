// fibbnaci

#include <iostream>
using namespace std;

int main () {
int x,y,z,i,n;

cout << "Mau berapa suku?";
cin >> n;

x = 0;
y = 1;

for (i=1;i<=n, i++){
    z = x + y;

    cout << z;
}
return 0;
}
