#include <iostream>
using namespace std;

int main (){
int n,i,j,k,l,m,temp;
int bil[100];

cout << "How many integers? ";
cin >> n;
if (n>100){
cout << "Maximum number is only 100!";
goto ujung;
}
cout << "Write the integers separated by spaces: ";
for (i=0;i<n;i++){
cin >> bil[i];
    if ((bil[i]<-100)||(bil[i]>100)){
    cout << "The number must be between 100 and -100!";
    goto ujung;
    }
}
for (j=0;j<n;j++){
    for (k=0;k<n;k++){
        if(bil[k]>bil[j]){
        temp = bil [j];
        bil [j] = bil [k];
        bil [k] = temp;
        }
    }
}
cout << "The smallest missing positive integer is ";

l=1;
m=0;
while (m<n){
if (bil[m]<=0){
    goto tambahm;
} else {
    if (l==bil[m]){
    l++;
    } else {
    goto akhir;
    }
}
tambahm :
m++;
}
if (m=n){
goto akhir;
}
akhir :
cout << l;
ujung :
return 0;
}
