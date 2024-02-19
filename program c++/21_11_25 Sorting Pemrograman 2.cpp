#include <iostream>
#include <ctime>
using namespace std;

void CetakData(int data[],int n) {
    int i;
    for(i=0;i<n;i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

void tukar(int &data1, int &data2){
    int temp;
    temp = data1;
    data1 = data2;
    data2 = temp;
}

void BubbleSort(int data[],int n){
    time_t start_time = clock();
    int i, j;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-1;j++){
            if (data[j]>data[j+1]){
                tukar(data[j],data[j+1]);
            }
        }
    }
    time_t finish_time = clock();
    cout << "Waktu running: " << (double) (finish_time - start_time) / CLOCKS_PER_SEC << " s" << endl;
    cout << "Bubble Sort: ";
    CetakData(data,n);
}

void InsertionSort(int data[],int n){
    time_t start_time = clock();
    int i,j,temp;
    for (j=1;j<n;j++){
        i=j-1;
        temp=data[j];
        while (data[i]>temp && i>=0){
            data[i+1]=data[i];
            i--;
        }
        data[i+1]=temp;
    }
    time_t finish_time = clock();
    cout << "Waktu running: " << (double) (finish_time - start_time) / CLOCKS_PER_SEC << " s" << endl;
    cout << "Insertion Sort: ";
    CetakData(data,n);
}

void SelectionSort (int data[],int n){
    time_t start_time = clock();
    int Min,temp,i,j;
    for (i=0;i<n;i++){
        Min=i;
        for(j=i+1;j<n;j++){
            if (data[j]<data[Min]){
                Min=j;
            }
        }
        tukar(data[i],data[Min]);
    }
    time_t finish_time = clock();
    cout << "Waktu running: " << (double) (finish_time - start_time) / CLOCKS_PER_SEC << " s" << endl;
    cout << "Selection Sort: ";
    CetakData(data,n);
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

int main(){
int data1[] = {15, 98, 54, 32, 76, 39, 90, 98, 45, 12, 45, 37};
int data2[] = {15, 98, 54, 32, 76, 39, 90, 98, 45, 12, 45, 37};
int data3[] = {15, 98, 54, 32, 76, 39, 90, 98, 45, 12, 45, 37};
int data4[] = {15, 98, 54, 32, 76, 39, 90, 98, 45, 12, 45, 37};
int data5[] = {15, 98, 54, 32, 76, 39, 90, 98, 45, 12, 45, 37};
BubbleSort(data1,12);

InsertionSort(data2,12);

SelectionSort(data3,12);

time_t start_time = clock();
merge_sort(data4, 0, 12);
time_t finish_time = clock();
cout << "Waktu running: " << (double) (finish_time - start_time) / CLOCKS_PER_SEC << " s" << endl;
cout << "Merge Sort: ";
CetakData(data4,12);

time_t start_time2 = clock();
quick_sort(data5,0,11);
time_t finish_time2 = clock();
cout << "Waktu running: " << (double) (finish_time2 - start_time2) / CLOCKS_PER_SEC << " s" << endl;
cout << "Quick Sort: ";
CetakData(data5,12);
return 0;
}

