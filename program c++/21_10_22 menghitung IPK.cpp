#include <iostream>
using namespace std;
struct GpaParameter{
char score;
long sks;
int value;
};
double calculate_gpa(GpaParameter gpa[],long n);

int main(){
long n1, j;
cout<<"Masukkan jumlah mata kuliah: ";
cin>>n1;
cout<<endl;
GpaParameter gpa1[n1];
for(j=0;j<n1;j++){
    cout<<"Skor mata kuliah ke-"<<j+1<<": ";
    cin>>gpa1[j].score;
    cout<<"SKS mata kuliah ke-"<<j+1<<": ";
    cin>>gpa1[j].sks;
    cout<<endl;
    if (gpa1[j].score!='A'&&gpa1[j].score!='B'&&gpa1[j].score!='C'&&gpa1[j].score!='D'&&gpa1[j].score!='E'){
    cout<<"Maaf, skor yang Anda masukkan salah(Skor = A/B/C/D/E)."<<endl;
    goto akhir;
    }
}
cout<<"IPK adalah "<<calculate_gpa(gpa1,n1)<<endl;
akhir :
return 0;
}

double calculate_gpa (GpaParameter gpa[],long n){
int i;
double total=0;
long jumlahSKS=0;

for(i=0;i<n;i++){
    if(gpa[i].score=='A'){
    gpa[i].value=4;
    } else if(gpa[i].score=='B'){
    gpa[i].value=3;
    } else if(gpa[i].score=='C'){
    gpa[i].value=2;
    }else if(gpa[i].score=='D'){
    gpa[i].value=1;
    } else if(gpa[i].score=='E'){
    gpa[i].value=0;
    }
    total+=gpa[i].value*gpa[i].sks;
    jumlahSKS+=gpa[i].sks;
}
return total/jumlahSKS;
}

