#include <iostream>
using namespace std;

void pola(string kata1, string kata2){
int i=0;
cout<<"******************************"<<endl;
cout<<"******************************"<<endl;
for (i=0;i<(30-kata1.length())/2;i++){
    cout<<"*";
}
if(kata1.length()%2!=0){
        cout<<"*";
}
cout<<kata1;
for (i=0;i<(30-kata1.length())/2;i++){
    cout<<"*";
}
cout<<endl;
cout<<"******************************"<<endl;
cout<<"******************************"<<endl;
for (i=0;i<(30-kata2.length())/2;i++){
    cout<<"*";
}
if(kata2.length()%2!=0){
    cout<<"*";
}
cout<<kata2;
for (i=0;i<(30-kata2.length())/2;i++){
    cout<<"*";
}
cout<<endl;
cout<<"******************************"<<endl;
cout<<"******************************"<<endl;
}

int main (){
string kalimat1, kalimat2;
cout<< "Masukkan kalimat pertama: ";
cin>>kalimat1;
cout<<"Masukkan kalimat kedua: ";
cin>>kalimat2;
pola(kalimat1,kalimat2);
return 0;
}
