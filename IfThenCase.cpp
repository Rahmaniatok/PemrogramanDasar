#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if (N>9999){
        cout << "puluhribuan";
    } else if(N>999){
        cout << "ribuan";
    } else if (N>99){
        cout << "ratusan";
    } else if (N>9){
        cout << "puluhan";
    } else {
        cout << "satuan";
    }
}