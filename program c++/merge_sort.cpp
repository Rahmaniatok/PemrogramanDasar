#include <iostream>
using namespace std;

void cetak_data(int d[], int s) {
   int i;
   for (i = 0; i < s; i++) {
      cout << d[i] << "  ";
   }
}


void array_merge(int data[], int first, int mid, int last) {
   int n1 = mid - first + 1;
   int n2 = last - mid;

   int tmp_left[n1], tmp_right[n2];

   for (int i = 0; i < n1; i++)
      tmp_left[i] = data[first + i];
   for (int i = 0; i < n2; i++)
      tmp_right[i] = data[mid + 1 + i];

   int i = 0;
   int j = 0;
   int k = first;
   while (i < n1 && j < n2) {
      if (tmp_left[i] <= tmp_right[j]) {
         data[k] = tmp_left[i];
         i++;
      } else {
         data[k] = tmp_right[j];
         j++;
      }
      k++;
   }

   while (i < n1) {
      data[k] = tmp_left[i];
      i++;
      k++;
   }

   while (j < n2) {
      data[k] = tmp_right[j];
      j++;
      k++;
   }
}


void merge_sort(int data[], int first, int last) {
   if (first < last) {
      int mid = (first + last) / 2;
      merge_sort(data, first, mid);
      merge_sort(data, mid + 1, last);
      array_merge(data, first, mid, last);
   }
}

int main() {
   int data[] = {15, 98, 54, 32, 76, 39, 90, 98, 45, 12, 45, 37};

   cout << "Merge sort" << endl;
   cout << "Data awal   : ";
   cetak_data(data, 12);
   merge_sort(data, 0, 11);
   cout << endl << "Data akhir  : ";
   cetak_data(data, 12);

   return 0;
}

