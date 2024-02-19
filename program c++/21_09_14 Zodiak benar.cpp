//program untuk mengidentifikasi zodiak

#include <iostream>
using namespace std;

int main () {
    int tanggal,bulan;

    cout<< "Masukan tanggal kelahiran Anda :";
    cin >> tanggal;
    cout<< "Masukkan bulan kelahiran Anda (dalam angka 1-12):";
    cin>> bulan;

    if (bulan == 1 ) {
        if (tanggal <= 19) {
            cout << "Zodiak Anda adalah Capricon";
        } else if ((tanggal > 19) && (tanggal <= 31)){
            cout << "Zodiak Anda adalah Aquarius";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 2) {
        if (tanggal <= 18) {
            cout << "Zodiak Anda adalah Aquarius";
        } else if ((tanggal > 18) && (tanggal <= 29)){
            cout << "Zodiak Anda adalah Pisces";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 3) {
        if (tanggal <= 20) {
            cout << "Zodiak Anda adalah Pisces";
        } else if ((tanggal > 20) && (tanggal <= 31)){
            cout << "Zodiak Anda adalah Aries";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 4) {
        if (tanggal <= 19) {
            cout << "Zodiak Anda adalah Aries";
        } else if ((tanggal > 19) && (tanggal <= 30)){
            cout << "Zodiak Anda adalah Taurus";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 5) {
        if (tanggal <= 20) {
            cout << "Zodiak Anda adalah Taurus";
        } else if ((tanggal > 20) && (tanggal <= 31)){
            cout << "Zodiak Anda adalah Gemini";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 6) {
        if (tanggal <= 20) {
            cout << "Zodiak Anda adalah Gemini";
        } else if ((tanggal > 20) && (tanggal <= 30)){
            cout << "Zodiak Anda adalah Cancer";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 7) {
        if (tanggal <= 22) {
            cout << "Zodiak Anda adalah Cancer";
        } else if ((tanggal > 22) && (tanggal <= 31)){
            cout << "Zodiak Anda adalah Leo";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 8) {
        if (tanggal <= 22) {
            cout << "Zodiak Anda adalah Leo";
        } else if ((tanggal > 22) && (tanggal <= 31)){
            cout << "Zodiak Anda adalah Virgo";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 9) {
        if (tanggal <= 22) {
            cout << "Zodiak Anda adalah Virgo";
        } else if ((tanggal > 22) && (tanggal <= 30)){
            cout << "Zodiak Anda adalah Libra";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 10) {
        if (tanggal <= 22) {
            cout << "Zodiak Anda adalah Libra";
        } else if ((tanggal > 22) && (tanggal <= 31)){
            cout << "Zodiak Anda adalah Scorpio";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 11) {
        if (tanggal <= 21) {
            cout << "Zodiak Anda adalah Scorpio";
        } else if ((tanggal > 21) && (tanggal <= 30)){
            cout << "Zodiak Anda adalah Sagitarius";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else if (bulan == 12) {
        if (tanggal <= 21) {
            cout << "Zodiak Anda adalah Sagitarius";
        } else if ((tanggal > 21) && (tanggal <= 31)){
            cout << "Zodiak Anda adalah capricon";
        } else {
            cout << "Tidak ada tanggal " << tanggal << " dalam bulan " << bulan;
        }
    } else {
     cout << "Tidak ada tanggal " << tanggal << " " << bulan;
    }
    return 0;
}
