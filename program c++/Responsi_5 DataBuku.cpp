#include <iostream>
using namespace std;
struct DataBuku {
long ISBN;
string judul;
long harga;
};

DataBuku buku[7] = {
{1102345, "Programming", 120000},
{1102349, "Database", 80000},
{1102346, "Microprocessor", 85000},
{1102360, "Calculus", 100000},
{1102352, "Cryptography", 75000},
{1102358, "Algorithm", 60000},
{1102341, "Expert System", 95000}
};

void SortDescending (DataBuku buku[], long n){
long i,j;
DataBuku temp;
for (j=1;j<n;j++){
    i=j-1;
    temp = buku[j];
    while (buku[i].ISBN<temp.ISBN && i>=0){
        buku[i+1]=buku[i];
    i--;
    }
    buku[i+1]=temp;
}
cout << "Sorted Data\n";
for (i=0;i<n;i++){
    cout << buku[i].ISBN << " " << buku[i].judul << " " << buku[i].harga << endl;
}
cout<<endl;
}

void BinarySearch(DataBuku buku[],long akhir,long ISBN){
long i, mid, awal = 0;
DataBuku temp;
bool ketemu = false;
while (awal<=akhir){
    mid = (awal+akhir)/2;
    if (buku[mid].ISBN < ISBN){
        awal = mid + 1;
    } else if (buku[mid].ISBN == ISBN){
        ketemu = true;
        temp = buku[0];
        buku[0] = buku[mid];
        buku[mid] = temp;
        buku[0].judul = "Deep Learning";
        buku[0].harga = 99000;
        cout << "\nThe Data is found and changed\n";
        for (i=0;i<7;i++){
            cout << buku[i].ISBN << " " << buku[i].judul << " " << buku[i].harga << endl;
        }
        break;
    } else if (buku[mid].ISBN > ISBN){
        akhir = mid - 1;
    }
}
if (!ketemu){
    cout << "\nThe data is not found\n\n";
    for (i=0;i<7;i++){
            cout << buku[i].ISBN << " " << buku[i].judul << " " << buku[i].harga << endl;
    }
}
}

int main (){
long ISBN;
SortDescending(buku,7);
cout << "Insert ISBN:\n";
cin >> ISBN;
BinarySearch(buku,7,ISBN);

return 0;
}
