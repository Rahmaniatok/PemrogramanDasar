#include <iostream>
#include <iomanip>

using namespace std;

void cetak_data(int d[], int s) {
   int i;
   for (i = 0; i < s; i++) {
      cout << d[i] <<" ";
   }
}

void tukar(int &a, int &b) {
   int t;
   t = a;
   a = b;
   b = t;
}


void quick_sort(int data[], int first, int last) {
   int a = first, b = last, pivot;
   pivot = data[(first + last) / 2];
   do {
      while (data[a] < pivot) a++;
      while (data[b] > pivot) b--;
      if (a <= b) {
         tukar(data[a], data[b]);
         a++;
         b--;
      }
   } while (a < b);
   if (first < b) quick_sort(data, first, b);
   if (a < last) quick_sort(data, a, last);
}

int main() {
   int data[] = {23, 78, 45, 8, 32, 56};

   cout << "Quick sort" << endl;
   cout << "Data awal   : ";
   cetak_data(data, 6);
   quick_sort(data, 0, 5);
   cout << endl << "Data akhir  : ";
   cetak_data(data, 6);

   return 0;
}

