#include <iostream>

using namespace std;

int step = 0;

void hanoiAkeC(int banyak_cakram, char a, char b, char c)
{
    if(banyak_cakram == 1){
        step += 1;
        cout << "Langkah ke-" << step<< ", pindah Cakram teratas " << a << " ke " << c << endl;
    }
    else {
        hanoiAkeC(banyak_cakram - 1, a, c, b);
        hanoiAkeC(1 , a, b, c);
        hanoiAkeC(banyak_cakram - 1, b, a, c);
    }
}

void hanoiAkeB(int banyak_cakram, char a, char b, char c)
{
    if (banyak_cakram == 1) {
        step += 1;
        cout << "Langkah ke-" << step<< ", pindah Cakram teratas " << a << " ke " << c << endl;
    }
    else {
        hanoiAkeB(banyak_cakram - 1, a, c, b);
        hanoiAkeB(1, a, b, c);
        hanoiAkeB(banyak_cakram - 1, c, b, a);
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
    if (pilih == 'B' || pilih == 'b') hanoiAkeB(banyak_cakram, 'A', 'B', 'C');
    if (pilih == 'C' || pilih == 'c') hanoiAkeC(banyak_cakram, 'A', 'B', 'C');
    cout << "Terdapat " << step << " langkah dalam pemindahan cakram sebanyak " << banyak_cakram << " ini." << endl;


}
