#include <iostream>
using namespace std;

int main (){
long N, bilangan[1000],jumlah,i;
double rata2;

cout << "How many integers? ";
cin>> N;

jumlah=0;
i=0;
cout << "Write the integers separated by spaces: ";
for (i=0;i<N;i++){
    cin >> bilangan[i];
    jumlah += bilangan[i];
}
rata2 = (double) jumlah/N;
cout << "The average is "<< rata2;
return 0;
}

