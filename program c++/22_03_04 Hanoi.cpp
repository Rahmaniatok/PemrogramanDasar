#include <iostream>

using namespace std;

void hanoi (int banyak_cakram, char a, char b, char c,string gambar[0][0], int jumlah_cakram)
{
    string temp;
    if(banyak_cakram == 1){
        cout << "Pindah Cakram teratas dari " << a << " ke " << c << endl;
        temp = gambar[0][a-65];
        gambar[0][a-65] = gambar[2][c-65];
        gambar[2][c-65] = temp;
        for(int i = 0; i<jumlah_cakram;i++){
            for(int j = 0; j<3; j++){
            cout<< gambar[i][j];
            }
            cout<<endl;
        }
    }
    else {
        hanoi (banyak_cakram - 1, a, c, b,gambar,jumlah_cakram);
        hanoi (1 , a, b, c,gambar,jumlah_cakram);
        hanoi (banyak_cakram - 1, b, a, c,gambar,jumlah_cakram);
    }
}

int main ()
{
    int banyak_cakram;
    cout << "		Program Hanoi		"<<endl;
    cout<<" Masukan Jumlah Cakram = ";cin>>banyak_cakram;
    cout<<endl;
    int jumlah_cakram = banyak_cakram;
    string gap = "";
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
        gap = gap + " ";
    }
    for(int i=0;i<banyak_cakram;i++){
        cout<<cakram[i]<<gap<<gap<<endl;;
    }
    string gambar[banyak_cakram][3];
    for(int i = 0; i<banyak_cakram;i++){
        for(int j = 1; j<3; j++){
            gambar[i][j]=gap;
        }
        gambar[i][0] = cakram[i];
    }
    hanoi(banyak_cakram, 'A', 'B', 'C',gambar[0][0],jumlah_cakram);
    cout<<endl;
    cout<<"Terima kasih"<<endl;


}
