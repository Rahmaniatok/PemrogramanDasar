#include <iostream>
using namespace std;

struct zodiac {
string Nama;
string BulanAwal;
int TanggalAwal;
string BulanAkhir;
int TanggalAkhir;
};
zodiac bintang[12];

int main (){
int i, tanggal;
string bulan;
bintang[0] = {"Aries","maret",21,"april",19};
bintang[1] = {"Taurus","april",20,"mei",20};
bintang[2] = {"Gemini","mei",21,"juni",20};
bintang[3] = {"Cancer","juni",21,"juli",22};
bintang[4] = {"Leo","juli",23,"agustus",22};
bintang[5] = {"Virgo","agustus",23,"september",22};
bintang[6] = {"Libra","september",23,"oktober",22};
bintang[7] = {"Scorpio","oktober",23,"november",21};
bintang[8] = {"Sagitarius","november",22,"desember",21};
bintang[9] = {"Capricon","desember",22,"januari",19};
bintang[10] = {"Aquarius","januari",20,"februari",18};
bintang[11] = {"Pisces","februari",19,"maret",20};

cout<<"Masukkan bulan lahir Anda (huruf kecil semua): ";
cin>>bulan;
cout<<"Masukkan tanggal lahir Anda : ";
cin>>tanggal;

i=0;
do{
if (bulan==bintang[i].BulanAwal){
    if ((tanggal>=bintang[i].TanggalAwal)&&(tanggal<=31)){
    cout<<"Zodiak Anda adalah "<<bintang[i].Nama<<"."<<endl;
    break;
    } else if (tanggal<1||tanggal>31){
    cout<<"Maaf, tanggal yang Anda masukkan salah."<<endl;
    break;
    }
}
if (bulan==bintang[i].BulanAkhir){
    if ((tanggal>=1)&&(tanggal<=bintang[i].TanggalAkhir)){
    cout<<"Zodiak Anda adalah "<<bintang[i].Nama<<"."<<endl;
    break;
    } else if (tanggal<1||tanggal>31){
    cout<<"Maaf, tanggal yang Anda masukkan salah."<<endl;
    break;
    }
}
i++;
} while (i<12);

if (i==12){
cout<<"Maaf, bulan yang Anda masukkan salah."<<endl;
}
return 0;
}
