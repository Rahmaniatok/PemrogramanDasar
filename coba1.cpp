#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int lowerBound(long arr[], long low, long high, long target) {
    int result = -1; // Inisialisasi nilai hasil dengan nilai yang tidak valid

    if (arr[low]>=target){
        result = low;
        return result;
    } else if (arr[high]<=target){
        result = high;
        return result;
    }

    while (low <= high) {
        long mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            result = mid; // Update hasil dengan indeks yang mungkin merupakan lower bound
            high = mid - 1; // Cari di sebelah kiri untuk mencari lower bound yang lebih awal
        } else {
            low = mid + 1; // Cari di sebelah kanan
        }
    }

    return result;
}

int main() {
    int N;
    cin >> N;
    long berat[N];
    for (int i = 0; i < N; i++) {
        cin >> berat[i];
    }

    int Q;
    cin >> Q;
    long batasBawah[Q];
    long batasAtas[Q];
    int jumlah[Q];

    for (int i = 0; i < Q; i++) {
        cin >> batasBawah[i];
        cin >> batasAtas[i];

        int indexBawah = lowerBound(berat, 0, N, batasBawah[i]);

        int indexAtas = lowerBound(berat, 0, N, batasAtas[i]);
        // if (berat[indexBawah] == batasBawah[i]){
        //     indexBawah = indexBawah + 1;
        // }
        if (berat[indexAtas] == batasAtas[i]){
            indexAtas = indexAtas + 1;
        }
        jumlah[i] = indexAtas - indexBawah;
    }

    for (int i = 0; i < Q; i++) {
        cout << jumlah[i] << endl;
    }

    return 0;
}
