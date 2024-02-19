#include <iostream>
using namespace std;

int main () {
long n, i, j,k;

cout<< "Masukan jumlah baris dan kolom yang diinginkan : ";
cin>> n;
i=0;
j=0;
k=0;

if (n<0){
cout<< "Maaf, input harus bilangan bulat positif.";
} else {
cout<< "     ";
for (i=0;i<n+1;i++){
    if (i<10){
        cout << "    ";
    } else if ((i>=10)&&(i<100)){
        cout << "   ";
    } else if ((i>=100)&&(i<1000)){
        cout << "  ";
    }
    cout << i;
}
cout<< endl;
for (j=0;j<n+1;j++){
    cout << j;
    if (j<10){
        cout << "   -";
    }else if ((j>=10)&&(j<100)){
        cout << "  -";
    }else if ((j>=100)&&(j<1000))
        cout << " -";
    for (k=0;k<n+1;k++){
            if (j*k<10){
             cout << "    ";
            }else if ((j*k>=10)&&(j*k<100)){
                cout<< "   ";
            }else if ((j*k>=100)&&(j*k<1000)){
                cout << "  ";
            } else if ((j*k>=1000)&&(j*k<10000)){
                cout << " ";
            }
            cout << j*k;
    }
    cout <<endl;
}
}
return 0;
}
