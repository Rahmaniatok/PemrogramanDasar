#include <iostream>

using namespace std;

void hanoi (int banyak_cakram, char a, char b, char c)
{
    if(banyak_cakram == 1){
        cout << "Pindah Cakram teratas dari " << a << " ke " << c << endl;
    }
    else {
        hanoi (banyak_cakram - 1, a, c, b);
        hanoi (1 , a, b, c);
        hanoi (banyak_cakram - 1, b, a, c);
    }
}

int main ()
{
    int banyak_cakram;
    cout << "		Program Hanoi		"<<endl;
    cout<<" Masukan Jumlah Cakram = ";cin>>banyak_cakram;
    cout<<endl;
    hanoi(banyak_cakram, 'A', 'B', 'C');
    cout<<endl;
    cout<<"Terima kasih"<<endl;


}
