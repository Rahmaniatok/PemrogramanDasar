#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int N = 0, arr[100];

    while (scanf("%d", &arr[N]) == 1 && N < 100) {
        N++;
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << endl;
    }

    return 0;
}