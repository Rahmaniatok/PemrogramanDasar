#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int indexS2Awal = s1.find(s2);
    int indexS2Akhir = s2.size();
    s1.erase(indexS2Awal, indexS2Akhir);

    int indexS3Awal = s1.find(s3);
    int indexS3Akhir = indexS3Awal + s3.size();
    s1.insert(indexS3Akhir, s4);
    cout << s1;
    return 0;
}