#include <iostream>
using namespace std;

int main(){
int n,i,j,parameterawal,parameterakhir,temp;
cout<<"Masukkan parameter sumbu x awal: ";
cin>>parameterawal;
cout<<"Masukkan parameter sumbu x akhir: ";
cin>>parameterakhir;
cout<<"Masukkan banyak data: ";
cin>>n;
int data[n];
for(i=0;i<n;i++){
    cout<<"Masukkan data untuk x = "<<parameterawal+i<<": ";
    cin>>data[i];
}
for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        if (data[i]>=data[j]){
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
}
cout<<endl<<"GRAFIK"<<endl;
for(i=0;i<n;i++){
    cout<<"|";
    for(j=n-2-i;j>=0;j--){
        cout<<"      ";
    }
    cout<<"     *"<<endl;
}
cout<<"--------------------------------------------"<<endl;
for(i=0;i<n;i++){
    cout<<parameterawal+i<<"  ";
}
return 0;
}
