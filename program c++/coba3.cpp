#include <iostream>

using namespace std;
int main (){
    char a;
    a = 'A';
    int banyak_cakram;
    cin>>banyak_cakram;
    string cakram[banyak_cakram];
    cakram[0]="";
    for (int i = 0; i<banyak_cakram; i++){
        for (int j=0;j<i*2 +1;j++){
            cakram[i] = cakram[i] + "*";
        }
        for (int j=banyak_cakram - i;j>0;j--){
            cakram[i] = " " + cakram[i];
        }
        for (int j=banyak_cakram - i;j>0;j--){
            cakram[i] =cakram[i] + " " ;
        }
    }
    for (int i=0;i<banyak_cakram;i++){
        cout<<cakram[i]<<endl;
    }
    cout<< cakram[a-65];
}
