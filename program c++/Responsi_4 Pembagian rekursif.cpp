#include <iostream>
using namespace std;
void pembagian (long N){
    cout << N << " / 2 = " << N/2 << endl;
    if (N == 3 || N == 2){
        cout << "berhasil";
    } else {
        pembagian (N/2);
    }
}
int main(){
int N;
cin >> N;
pembagian(N);
return 0;
}
