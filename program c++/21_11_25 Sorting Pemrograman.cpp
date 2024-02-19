#include <iostream>
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
    int i, j;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-1;j++){
            if (data[j]>data[j+1]){
                tukar(data[j],data[j+1]);
            }
        }
    }
}

void InsertionSort(int data[],int n){
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
}

void SelectionSort (int data[],int n){
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
}

void MergeGabung (int data[], int awal, int mid, int akhir){
    int IndexSubArray1 = mid - awal + 1;
    int IndexSubArray2 = akhir - mid;
    int TempKiri[IndexSubArray1], TempKanan[IndexSubArray2];

    for (int i=0;i<IndexSubArray1;i++){
        TempKiri[i] = data[awal+i];
    }
    for (int i=0;i<IndexSubArray2;i++){
        TempKanan[i] = data[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = awal;
    while (i < IndexSubArray1 && j < IndexSubArray2){
        if (TempKiri[i]<=TempKanan[j]){
            data[k] = TempKiri[i];
            i++;
        } else {
            data[k] = TempKanan[j];
            j++;
        }
        k++;
    }

    while (i < IndexSubArray1){
        data[k] = TempKiri[i];
        i++;
        k++;
    }
    while (j < IndexSubArray2){
        data[k] = TempKanan[i];
        j++;
        k++;
    }
}

void MergePisah(int data[], int awal, int akhir){
    if(awal < akhir){
        int mid = (awal+akhir)/2;
        MergePisah(data,awal,mid);
        MergePisah(data,mid+1,akhir);
        MergeGabung(data,awal,mid,akhir);
    }
}

void QuickSort (int data[], int awal, int akhir){
    int a = awal, b = akhir;
    int pivot = data[(awal+akhir)/2];

    do {
        while (data[a]<data[pivot]){
            a++;
        }
        while (data[b]>data[pivot]){
            b--;
        }
        if (a<=b){
            tukar(data[a],data[b]);
            a++;
            b--;
        }
    }while (a<b);
    if (awal<b){
        QuickSort(data,awal,b);
    }
    if (akhir>a){
        QuickSort(data,a,akhir);
    }
}


int main(){
int data[] = {15, 98, 54, 32, 76, 39, 90, 98, 45, 12, 45, 37};
/*BubbleSort(data,11);
cout << "Bubble Sort: ";
InsertionSort(data,11);
SelectionSort(data,11);*/
MergePisah(data, 0, 11);
CetakData(data,12);


return 0;
}
