#include<iostream>
#include <vector>
using namespace std; 

struct batu{
    int berat;
    int harga;
    int hargaPerBerat;
};

void bubbleSort(batu batuku[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (batuku[j].hargaPerBerat > arr[j + 1].hargaPerBerat) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j].hargaPerBerat;
                arr[j].hargaPerBerat = arr[j + 1].hargaPerBerat;
                arr[j + 1].hargaPerBerat = temp;
            }
        }
    }
}

int main(){
    int N, K;
    int jawaban[K];
    cin >> N, K;
    batu batuku[K];
    for (int i=0; i<K; i++){
        cin >> batuku[i].berat >> batuku[i].harga;
        batuku[i].hargaPerBerat = batuku[i].harga/batuku[i].berat;
    }
    bubbleSort(batuku, K);
    int beratTotal;
    int i=0;
    int urutan=0;
    while(beratTotal<N){
        jawaban[i]=
    }
}