#include <iostream>
using namespace std;

int main() {
    int x,y,z,i,n;
    cout <<"Mau berapa bilangan?";
    cin >> n;
    x = 0;
    y = 1;
    for (i=0;i<=n;i++) {
        z = x + y;
        cout <<z<<endl;
        x = y;
        y = z;
    }
}