#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,x,index;
    cout << "Berapa banyak data yang ingin dimasukkan ? ";
    cin >> n;
    int h[n];
    bool a[n];

    for (int i=0;i<n;i++){
        a[i]=0;
    }

    for (int i=0;i<n;i++){
        cout << "Masukkan angka ke-" << i+1 << ":";
        cin  >> x;
        index=x%n;
        if(a[index]==0){
            h[index]=x;
            a[index]=1;
        }
        else{
            bool nfound=true;
            while (index<n && nfound){
            if(a[index]==0){
                h[index]=x;
                a[index]=1;
                nfound=false;
            }
            index=index+1;
            if(index==n)index=0;
            }
        }
    }
    int pilihan;

    while (pilihan!=5){
    cout << "============" << endl;
    cout << "1.print" << endl;
    cout << "2.hapus data" << endl;
    cout << "3.mencari data" << endl;
    cout << "4.input data" << endl;
    cout << "5.Tutup program" << endl;
    cout << "Pilih salah satu tindakan =";
    cin >> pilihan;

        switch(pilihan){
        case 1:
            cout << "Index  Data" << endl;
             for (int i=0;i<n;i++){
                cout << setw(5) << left << i << " :";
                if(a[i]!=0)
                cout << h[i] << endl;
                if(a[i]==0) cout << "Kosong" << endl;
            }
               break;
        case 3:
            int cari;
            cout << "Masukan angka yang ingin dicari :";
            cin >> cari;
            index=cari%n;
            if(h[index]==cari){
                cout << "Data ditemukan pada index " << index << endl;
            }
            else{
                bool nfound=true;
                while (index<n && nfound){
                if(h[index]==cari){
                cout << "Data ditemukan pada index " << index << endl;
                nfound=false;
                }
                index=index+1;
                if(index==n && nfound){
                    for (int i=0;i<cari%n;i++){
                        if(h[i]==cari){
                        cout << "Data ditemukan pada index " << i << endl;
                        nfound=false;
                        }
                    }
                }
                }
                if(nfound)cout << "Data tidak ditemukan";
            }
            break;
        case 4:
            cout << "Masukan data yang ingin dimasukkan :";
            cin >>x;
            index=x%n;
            if(a[index]==0){
            h[index]=x;
            a[index]=1;
            cout << "Success" << endl;
            }
            else{
            bool nfound=true;
            while (index<n && nfound){
            if(a[index]==0){
                h[index]=x;
                a[index]=1;
                nfound=false;
                cout << "Success" << endl;
            }
            index=index+1;
            }
            if(index==n && nfound){
                for (int i=0;i<cari%n;i++){
                    if(a[i]==0){
                    cout << "Success" << endl;
                    a[i]=1;
                    nfound=false;
                    }
                }
            }
            if(nfound) cout << "Tidak ada tempat kosong. Silahkan hapus salah satu data terlebih dahulu" << endl;
            }
            break;
        case 2:
            int e;
            cout << "Masukan index yang ingin dihapuskan datanya :";
            cin >> e;
            a[e]=0;
            cout << "Success"<< endl;
            break;
    }
    }
}
