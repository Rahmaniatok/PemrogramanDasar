#include <iostream>

using namespace std;

int step = 0;

void hanoi(int banyak_cakram, char a, char b, char c)
{
    if(banyak_cakram == 1){
        step += 1;
        cout << "Langkah ke-" << step<< ", pindah Cakram teratas " << a << " ke " << c << endl;
    }
    else {
        hanoi(banyak_cakram - 1, a, c, b);
        hanoi(1 , a, b, c);
        hanoi(banyak_cakram - 1, b, a, c);
    }
}

int main ()
{
    int banyak_cakram;
    char pilih;

    cout << "		Program Hanoi		" << endl;
    cout << " Masukan Jumlah Cakram = ";
    cin >> banyak_cakram;
    cout << "Pindahkan ke tiang B/C? ";
    cin >> pilih;
    if (pilih == 'B' || pilih == 'b'){ hanoi(banyak_cakram, 'A', 'C', 'B');}
    else if (pilih == 'C' || pilih == 'c'){ hanoi(banyak_cakram, 'A', 'B', 'C');}
    else {cout<<"input salah"<<endl;}
    cout << "Terdapat " << step << " langkah dalam pemindahan cakram sebanyak " << banyak_cakram << " ini." << endl;
}
