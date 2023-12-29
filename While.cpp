#include<iostream>
#include <cstdio>
using namespace std;

int main() {
    char baris[100];
    string kalimat[100];
    int i = 0;
    while(scanf("%s", baris) != EOF){
        kalimat[i] = baris;
        i++;
    }
    for (int j=0; j<i; j++){
        cout << kalimat[j] << endl;
    }
    return 0;
}