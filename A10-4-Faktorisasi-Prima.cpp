#include<iostream>
#include <cmath>
using namespace std;

bool isPrime(long number) {
    if (number <= 1) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return false;
    }
    long sqrtNumber = sqrt(number);
    for (long i = 3; i <= sqrtNumber; i += 2) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    long N;
    cin >> N;
    long NSementara = N;
    for( long i=2; i <= N; i++){
        int pangkat=0;
        while(isPrime(i) && NSementara%i==0){
            NSementara=NSementara/i;
            pangkat++;
        }
        if(pangkat !=0 && NSementara != 1){
            if(pangkat !=1){
                cout << i << "^" << pangkat << " x ";
            } else {
                cout << i<< " x ";        
            }
        } else if(pangkat !=0){
            if(pangkat !=1){
                cout << i << "^" << pangkat;
            } else {
                cout << i;        
            }
            break;
        }
    }
    return 0;
}