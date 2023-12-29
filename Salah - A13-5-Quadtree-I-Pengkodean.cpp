#include <iostream>
using namespace std;

int array[128][128];
bool isHomogenSatu = false;

void quadtree(int array[128][128], int panjangAsli, int x, int y, int panjang){
    int tengah=panjang/2;
    int i, j;
    if(panjang == 1){
        
    }
    for(i=0; i<panjang; i++){
        for(j=0; j<panjang; j++){
            if(array[x+i][y+i]==0){
                isHomogenSatu = false;
                goto endLoop;
            }
        }
    }
    endLoop:
    if(i==panjang && j==panjang){
        isHomogenSatu = true;
    }
    if(isHomogenSatu){
        if(x<panjang && y<panjang){
            cout << 0;
        }else if(x>panjang && y<panjang){
            cout << 1;
        }else if(x<panjang && y>panjang){
            cout << 2;
        }else{
            cout << 3;
        }
    } else {
        quadtree(array, x, y, tengah);
        quadtree(array, x, y+tengah, tengah);
        quadtree(array, x+tengah, y, tengah);
        quadtree(array, x+tengah, y+tengah, tengah);
        // if(x<tengah && y<tengah){
        //     cout << 0;
        //     quadtree(array, x, y, tengah);
        // }else if(x>tengah && y<tengah){
        //     cout << 1;
        //     quadtree(array, x+panjang, y, tengah);
        // }else if(x>tengah && y<tengah){
        //     cout << 2;
        //     quadtree(array, x, y+panjang, tengah);
        // }else{
        //     cout << 3;
        //     quadtree(array, x+panjang, y+panjang, tengah);
        // }
    }
}
int nearestBigger(int num) {
    if (num <= 0) {
        return 1; // Jika angka negatif atau nol, kembalikan 1 (nilai terkecil yang merupakan pangkat dari 2).
    }

    int nearestBigger = 1;
    while (nearestBigger < num) {
        nearestBigger <<= 1; // Mengalikan dengan 2 menggunakan operator bitwise shift kiri.
    }

    return nearestBigger;
}

int main(){
    int panjangX, panjangY;
    cin >> panjangX >> panjangY;
    for(int i=0; i<panjangX; i++){
        for(int j=0; j<panjangY; j++){
            cin >> array[i][j];
        }
    }
    int panjang;
    if(panjangX>=panjangY){
        panjang = panjangX;
    } else{
        panjang = panjangY;
    }
    int pangkatDua= nearestBigger(panjang);
    for(int i=panjangX; i<pangkatDua; i++){
        for(int j=panjangY; j<pangkatDua; j++){
            array[i][j] = 0;
        }
    }
    quadtree(array, 0, 0, pangkatDua);
    return 0;
}