#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A, T;
    cin >> A >> T;
    cout << setprecision(2) << fixed << float(A*T)/2;
    return 0;
}