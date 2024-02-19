#include <iostream>
using namespace std;

int main (){
int matriksa[2][2]={{1,2},{3,4}};
int matriksb[2][2]={{2,4},{4,1}};
int matrikstotal[2][2];
int i=0, j=0;

for (i=0;i<2;i++){
    for (j=0;j<2;j++){
    matrikstotal[i][j]=matriksa[i][j]+matriksb[i][j];

    cout << matrikstotal[i][j] << "  ";
}
cout << endl;
}
}
