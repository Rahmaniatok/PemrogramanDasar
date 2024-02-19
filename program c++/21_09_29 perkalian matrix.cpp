#include <iostream>
using namespace std;

int main (){
int i,j;
long a[2][2];
long b[2][2];
long hasil[2][2];

cout<<endl;
cout << "Enter elements of matrix 1:"<<endl;
for (i=0;i<=1;i++){
    for (j=0;j<=1;j++){
    cout << "Enter element a"<<i+1<<j+1<<" : ";
    cin>> a[i][j];
    }
}
cout<<endl;
cout << "Enter elements of matrix 2:"<<endl;
for (i=0;i<=1;i++){
    for (j=0;j<=1;j++){
    cout<<"Enter element b"<<i+1<<j+1<<" : ";
    cin>> b[i][j];
    }
}
cout<<endl;
cout<<"Matrix 1:"<<endl;
for(i=0;i<=1;i++){
    for(j=0;j<=1;j++){
        if((a[i][j]>=0)&&(a[i][j]<10)){
        cout<<"    ";
        } else if(((a[i][j]>=-9)&&(a[i][j]<0))||((a[i][j]>=10)&&(a[i][j]<100))){
        cout<<"   ";
        } else if(((a[i][j]>=-99)&&(a[i][j]<-9))||((a[i][j]>=100)&&(a[i][j]<1000))){
        cout<<"  ";
        } else if(((a[i][j]>=-999)&&(a[i][j]<-99))||((a[i][j]>=1000)&&(a[i][j]<10000))){
        cout<<" ";
        }
        cout<<a[i][j];
    }
cout<<endl;
}
cout<<endl;
cout<<"Matrix 2:"<<endl;
for(i=0;i<=1;i++){
    for(j=0;j<=1;j++){
        if((b[i][j]>=0)&&(b[i][j]<10)){
        cout<<"    ";
        } else if(((b[i][j]>=-9)&&(b[i][j]<0))||((b[i][j]>=10)&&(b[i][j]<100))){
        cout<<"   ";
        } else if(((b[i][j]>=-99)&&(b[i][j]<-9))||((b[i][j]>=100)&&(b[i][j]<1000))){
        cout<<"  ";
        } else if(((b[i][j]>=-999)&&(b[i][j]<-99))||((b[i][j]>=1000)&&(b[i][j]<10000))){
        cout<<" ";
        }
        cout<<b[i][j];
    }
cout<<endl;
}
hasil[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
hasil[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
hasil[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
hasil[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];

cout<<endl;
cout<<"Output Matrix:"<<endl;
for(i=0;i<=1;i++){
    for(j=0;j<=1;j++){
        if((hasil[i][j]>=0)&&(hasil[i][j]<10)){
        cout<<"    ";
        } else if(((hasil[i][j]>=-9)&&(hasil[i][j]<0))||((hasil[i][j]>=10)&&(hasil[i][j]<100))){
        cout<<"   ";
        } else if(((hasil[i][j]>=-99)&&(hasil[i][j]<-9))||((hasil[i][j]>=100)&&(hasil[i][j]<1000))){
        cout<<"  ";
        } else if(((hasil[i][j]>=-999)&&(hasil[i][j]<-99))||((hasil[i][j]>=1000)&&(hasil[i][j]<10000))){
        cout<<" ";
        }
        cout<<hasil[i][j];
    }
cout<<endl;
}
return 0;
}

