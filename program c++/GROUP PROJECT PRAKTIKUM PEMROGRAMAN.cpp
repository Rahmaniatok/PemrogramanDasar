#include <iostream>
#include <ctime>
#include <string>
using namespace std;

struct kamar {
	string nama_pemesan;
	int nomor;
	bool dipesan;
	int hari1, bln1, thn1;
	int hari2, bln2, thn2;
	int JumlahHari;
};

kamar SDouble[4]{
	{"", 101, false},
	{"", 102, false},
	{"", 103, false},
	{"", 104, false}
};

kamar STwin[4]{
	{"", 201, false},
	{"", 202, false},
	{"", 203, false},
	{"", 204, false}
};

kamar Deluxe[4]{
	{"", 301, false},
	{"", 302, false},
	{"", 303, false},
	{"", 304, false}
};

kamar Suite[4]{
	{"", 401, false},
	{"", 402, false},
	{"", 403, false},
	{"", 404, false}
};

kamar Elmi[4]{
	{"", 501, false},
	{"", 502, false},
	{"", 503, false},
	{"", 504, false}
};


int HitungSelisihHari(int hari1, int bln1, int thn1, int hari2, int bln2, int thn2) {
	int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int tahun1, tahun2, selisih, temp;
	temp = thn1;
	if (bln1 <= 2)
		temp--;
	tahun1 = temp / 4 - temp / 100 + temp / 400;
	temp = thn2;
	if (bln2 <= 2)
		temp--;
	tahun2 = temp / 4 - temp / 100 + temp / 400;

	long int n1 = thn1 * 365 + hari1;
	for (int i = 0; i < bln1 - 1; i++)
		n1 += monthDays[i];
	n1 += tahun1;

	long int n2 = thn2 * 365 + hari2;
	for (int i = 0; i < bln2 - 1; i++)
		n2 += monthDays[i];
	n2 += tahun2;

	selisih = (n2 - n1) + 1;
	return selisih;
}

int harga(int pilihanKamar, int JumlahHari) {
	if (pilihanKamar == 1 || pilihanKamar == 2) {
		return 498000 * JumlahHari;
	}
	else if (pilihanKamar == 3) {
		return 598000 * JumlahHari;
	}
	else if (pilihanKamar == 4) {
		return 1520000 * JumlahHari;
	}
	else if (pilihanKamar == 5) {
		return 1865000 * JumlahHari;
	}
}


void checkIn() {
	int pilihan_kamar;
	int nomorKamar;
	cout << "\nPilih kamar yang ingin Anda pesan\n";
	cout << "1.Superior Double\n" << "2.Superior Twin\n" << "3.Deluxe\n" << "4.Suite Room\n" << "5.Elmi Suite\n";
	cout << "Pilihan anda (1/2/3/4/5): "; cin >> pilihan_kamar;
	cout << "\nKamar yang dapat dipesan\n";
	if (pilihan_kamar == 1) {
		for (int i = 0; i < 4; i++) {
			if (!SDouble[i].dipesan) cout << SDouble[i].nomor << endl;
		}
		cout << "Silakan masukkan nomor kamar pesanan: "; cin >> nomorKamar;
		cout << "Silahkan masukkan nama Anda: ";
		getline(cin >> ws, SDouble[(nomorKamar % 100) - 1].nama_pemesan);
		SDouble[(nomorKamar % 100) - 1].dipesan = true;
		cout << "Silakan masukkan tanggal Check-In: ";
		cin >> SDouble[(nomorKamar % 100) - 1].hari1 >> SDouble[(nomorKamar % 100) - 1].bln1 >> SDouble[(nomorKamar % 100) - 1].thn1;
		cout << "Silakan masukkan tanggal Check-Out: ";
		cin >> SDouble[(nomorKamar % 100) - 1].hari2 >> SDouble[(nomorKamar % 100) - 1].bln2 >> SDouble[(nomorKamar % 100) - 1].thn2;
		SDouble[(nomorKamar % 100) - 1].JumlahHari = HitungSelisihHari(SDouble[(nomorKamar % 100) - 1].hari1, SDouble[(nomorKamar % 100) - 1].bln1, SDouble[(nomorKamar % 100) - 1].thn1,
			SDouble[(nomorKamar % 100) - 1].hari2, SDouble[(nomorKamar % 100) - 1].bln2, SDouble[(nomorKamar % 100) - 1].thn2);
	}
	else if (pilihan_kamar == 2) {
		for (int i = 0; i < 4; i++) {
			if (!STwin[i].dipesan) cout << STwin[i].nomor << endl;
		}
		cout << "Silakan masukkan nomor kamar pesanan: "; cin >> nomorKamar;
		cout << "Silahkan masukkan nama Anda: ";
		getline(cin >> ws, STwin[(nomorKamar % 100) - 1].nama_pemesan);
		STwin[(nomorKamar % 100) - 1].dipesan = true;
		cout << "Silakan masukkan tanggal Check-In: ";
		cin >> STwin[(nomorKamar % 100) - 1].hari1 >> STwin[(nomorKamar % 100) - 1].bln1 >> STwin[(nomorKamar % 100) - 1].thn1;
		cout << "Silakan masukkan tanggal Check-Out: ";
		cin >> STwin[(nomorKamar % 100) - 1].hari2 >> STwin[(nomorKamar % 100) - 1].bln2 >> STwin[(nomorKamar % 100) - 1].thn2;
		STwin[(nomorKamar % 100) - 1].JumlahHari = HitungSelisihHari(STwin[(nomorKamar % 100) - 1].hari1, STwin[(nomorKamar % 100) - 1].bln1, STwin[(nomorKamar % 100) - 1].
			thn1, STwin[(nomorKamar % 100) - 1].hari2, STwin[(nomorKamar % 100) - 1].bln2, STwin[(nomorKamar % 100) - 1].thn2);
	}
	else if (pilihan_kamar == 3) {
		for (int i = 0; i < 4; i++) {
			if (!Deluxe[i].dipesan) cout << Deluxe[i].nomor << endl;
		}
		cout << "Silakan masukkan nomor kamar pesanan: "; cin >> nomorKamar;
		cout << "Silahkan masukkan nama Anda: ";
		getline(cin >> ws, Deluxe[(nomorKamar % 100) - 1].nama_pemesan);
		Deluxe[(nomorKamar % 100) - 1].dipesan = true;
		cout << "Silakan masukkan tanggal Check-In: ";
		cin >> Deluxe[(nomorKamar % 100) - 1].hari1 >> Deluxe[(nomorKamar % 100) - 1].bln1 >> Deluxe[(nomorKamar % 100) - 1].thn1;
		cout << "Silakan masukkan tanggal Check-Out: ";
		cin >> Deluxe[(nomorKamar % 100) - 1].hari2 >> Deluxe[(nomorKamar % 100) - 1].bln2 >> Deluxe[(nomorKamar % 100) - 1].thn2;
		Deluxe[(nomorKamar % 100) - 1].JumlahHari = HitungSelisihHari(Deluxe[(nomorKamar % 100) - 1].hari1, Deluxe[(nomorKamar % 100) - 1].bln1, Deluxe[(nomorKamar % 100) - 1].thn1,
			Deluxe[(nomorKamar % 100) - 1].hari2, Deluxe[(nomorKamar % 100) - 1].bln2, Deluxe[(nomorKamar % 100) - 1].thn2);
	}
	else if (pilihan_kamar == 4) {
		for (int i = 0; i < 4; i++) {
			if (!Suite[i].dipesan) cout << Suite[i].nomor << endl;
		}
		cout << "Silakan masukkan nomor kamar pesanan: "; cin >> nomorKamar;
		cout << "Silahkan masukkan nama Anda: ";
		getline(cin >> ws, Suite[(nomorKamar % 100) - 1].nama_pemesan);
		Suite[(nomorKamar % 100) - 1].dipesan = true;
		cout << "Silakan masukkan tanggal Check-In: ";
		cin >> Suite[(nomorKamar % 100) - 1].hari1 >> Suite[(nomorKamar % 100) - 1].bln1 >> Suite[(nomorKamar % 100) - 1].thn1;
		cout << "Silakan masukkan tanggal Check-Out: ";
		cin >> Suite[(nomorKamar % 100) - 1].hari2 >> Suite[(nomorKamar % 100) - 1].bln2 >> Suite[(nomorKamar % 100) - 1].thn2;
		Suite[(nomorKamar % 100) - 1].JumlahHari = HitungSelisihHari(Suite[(nomorKamar % 100) - 1].hari1, Suite[(nomorKamar % 100) - 1].bln1, Suite[(nomorKamar % 100) - 1].thn1,
			Suite[(nomorKamar % 100) - 1].hari2, Suite[(nomorKamar % 100) - 1].bln2, Suite[(nomorKamar % 100) - 1].thn2);
	}
	else if (pilihan_kamar == 5) {
		for (int i = 0; i < 4; i++) {
			if (!Elmi[i].dipesan) cout << Elmi[i].nomor << endl;
		}
		cout << "Silakan masukkan nomor kamar pesanan: "; cin >> nomorKamar;
		cout << "Silahkan masukkan nama Anda: ";
		getline(cin >> ws, Elmi[(nomorKamar % 100) - 1].nama_pemesan);
		Elmi[(nomorKamar % 100) - 1].dipesan = true;
		cout << "Silakan masukkan tanggal Check-In: ";
		cin >> Elmi[(nomorKamar % 100) - 1].hari1 >> Elmi[(nomorKamar % 100) - 1].bln1 >> Elmi[(nomorKamar % 100) - 1].thn1;
		cout << "Silakan masukkan tanggal Check-Out: ";
		cin >> Elmi[(nomorKamar % 100) - 1].hari2 >> Elmi[(nomorKamar % 100) - 1].bln2 >> Elmi[(nomorKamar % 100) - 1].thn2;
		Elmi[(nomorKamar % 100) - 1].JumlahHari = HitungSelisihHari(Elmi[(nomorKamar % 100) - 1].hari1, Elmi[(nomorKamar % 100) - 1].bln1, Elmi[(nomorKamar % 100) - 1].thn1,
			Elmi[(nomorKamar % 100) - 1].hari2, Elmi[(nomorKamar % 100) - 1].bln2, Elmi[(nomorKamar % 100) - 1].thn2);
	}
	cout << "\nKamar berhasil dipesan. Terima kasih sudah memesan!";
}

void checkOut() {
	int nomor_kamar;
	cout << "Silakan masukkan nomor kamar Anda: "; cin >> nomor_kamar;
	cout << endl;
	if (nomor_kamar / 100 == 1) {
		for (int i = 101; i <= 104; i++) {
			if (nomor_kamar == i) {
				cout << "Nama Pemesan: " << SDouble[nomor_kamar % 100 - 1].nama_pemesan << endl;
				cout << "Nomor Kamar: " << SDouble[nomor_kamar % 100 - 1].nomor << endl;
				SDouble[nomor_kamar % 100 - 1].dipesan = false;
				cout << "\nAnda telah memesan kamar selama " << SDouble[nomor_kamar % 100 - 1].JumlahHari << " hari\n";
				cout << "Harga: " << harga(nomor_kamar / 100, SDouble[nomor_kamar % 100 - 1].JumlahHari);
			}
		}
	}
	else if (nomor_kamar / 100 == 2) {
		for (int i = 201; i <= 204; i++) {
			if (nomor_kamar == i) {
				cout << "Nama Pemesan: " << STwin[nomor_kamar % 100 - 1].nama_pemesan << endl;
				cout << "Nomor Kamar: " << STwin[nomor_kamar % 100 - 1].nomor << endl;
				STwin[nomor_kamar % 100 - 1].dipesan = false;
				cout << "\nAnda telah memesan kamar selama " << STwin[nomor_kamar % 100 - 1].JumlahHari << " hari\n";
				cout << "Harga: " << harga(nomor_kamar / 100, STwin[nomor_kamar % 100 - 1].JumlahHari);
			}
		}
	}
	else if (nomor_kamar / 100 == 3) {
		for (int i = 301; i <= 304; i++) {
			if (nomor_kamar == i) {
				cout << "Nama Pemesan: " << Deluxe[nomor_kamar % 100 - 1].nama_pemesan << endl;
				cout << "Nomor Kamar: " << Deluxe[nomor_kamar % 100 - 1].nomor << endl;
				Deluxe[nomor_kamar % 100 - 1].dipesan = false;
				cout << "\nAnda telah memesan kamar selama " << Deluxe[nomor_kamar % 100 - 1].JumlahHari << " hari" << endl;
				cout << "Harga: " << harga(nomor_kamar / 100, Deluxe[nomor_kamar % 100 - 1].JumlahHari);
			}
		}
	}
	else if (nomor_kamar / 100 == 4) {
		for (int i = 401; i <= 404; i++) {
			if (nomor_kamar == i) {
				cout << "Nama Pemesan: " << Suite[nomor_kamar % 100 - 1].nama_pemesan << endl;
				cout << "Nomor Kamar: " << Suite[nomor_kamar % 100 - 1].nomor << endl;
				Suite[nomor_kamar % 100 - 1].dipesan = false;
				cout << "\nAnda telah memesan kamar selama " << Suite[nomor_kamar % 100 - 1].JumlahHari << " hari\n";
				cout << "Harga: " << harga(nomor_kamar / 100, Suite[nomor_kamar % 100 - 1].JumlahHari);
			}
		}
	}
	else if (nomor_kamar / 100 == 5) {
		for (int i = 501; i <= 504; i++) {
			if (nomor_kamar == i) {
				cout << "Nama Pemesan: " << Elmi[(nomor_kamar % 100) - 1].nama_pemesan << endl;
				cout << "Nomor Kamar: " << Elmi[(nomor_kamar % 100) - 1].nomor << endl;
				Elmi[(nomor_kamar % 100) - 1].dipesan = false;
				cout << "\nAnda telah memesan kamar selama " << Elmi[nomor_kamar % 100 - 1].JumlahHari << " hari\n";
				cout << "Harga: " << harga(nomor_kamar / 100, Elmi[nomor_kamar % 100 - 1].JumlahHari);
			}
		}
	}
	cout << "\nAnda telah Check-Out!" << endl;
}

void infoKamar() {
	cout << "\nSuperior Double\n" << "Fasilitas: satu tempat tidur (2 orang), kamar mandi dengan bath tub dan shower, TV, mini bar.";
	cout << "\nHarga: IDR 498,000/malam (termasuk sarapan)\n";
	cout << "Superior Twin\n" << "Fasilitas: dua tempat tidur (2 orang), kamar mandi dengan bath tub dan shower, TV, mini bar.";
	cout << "\nHarga: IDR 498,000/malam (termasuk sarapan)\n";
	cout << "Deluxe Room\n" << "Fasilitas: satu tempat tidur (2 orang), kamar mandi dengan bath tub dan shower, TV, mini bar";
	cout << "\nHarga: IDR 598,000/malam (termasuk sarapan)\n";
	cout << "Suite Room\n" << "Fasilitas: kamar dengan ukuran 56 meter persegi, ruang tamu dan kamar tidur, kamar mandi dengan bath tub dan shower, TV, mini bar";
	cout << "\nHarga: IDR 1,520,000/malam (termasuk sarapan)\n";
	cout << "Elmi Suite\n" << "Fasilitas: kamar dengan ukuran 72 meter persegi, ruang tamu dan kamar tidur, kamar mandi dengan bath tub dan shower, TV, mini bar";
	cout << "\nHarga: IDR 1,865,000/malam (termasuk sarapan)\n";
}

void cariNama() {
	string name;
	cout << "Masukkan nama: ";
	getline(cin >> ws, name);
	int sama;
	bool banding = false;
	for (int i = 1; i <= 5; i++) {
		if (i == 1) {
			for (int j = 0; j < 4; j++) {
				sama = name.compare(SDouble[j].nama_pemesan);
				if (sama == 0) {
					cout << "Kamar ditemukan! Kamar nomor: " << j + 101 << endl;
					banding = true; break;
				}
			}
		}
		else if (i == 2) {
			for (int j = 0; j < 4; j++) {
				sama = name.compare(STwin[j].nama_pemesan);
				if (sama == 0) {
					cout << "Kamar ditemukan! Kamar nomor: " << j + 201 << endl;
					banding = true; break;
				}
			}
		}
		else if (i == 3) {
			for (int j = 0; j < 4; j++) {
				sama = name.compare(Deluxe[j].nama_pemesan);
				if (sama == 0) {
					cout << "Kamar ditemukan! Kamar nomor: " << j + 301 << endl;
					banding = true; break;
				}
			}
		}
		else if (i == 4) {
			for (int j = 0; j < 4; j++) {
				sama = name.compare(Suite[j].nama_pemesan);
				if (sama == 0) {
					cout << "Kamar ditemukan! Kamar nomor: " << j + 401 << endl;
					banding = true; break;
				}
			}
		}
		else if (i == 5) {
			for (int j = 0; j < 4; j++) {
				sama = name.compare(Elmi[j].nama_pemesan);
				if (sama == 0) {
					cout << "Kamar ditemukan! Kamar nomor: " << j + 501 << endl;
					banding = true; break;
				}
			}
		}
	}
	if (!banding) {
		cout << "Kamar tidak ditemukan!\n";
	}
}

void awal() {
	int pilihan_menu;
	cout << "Selamat Datang di Hotel Elmi!\n";
	cout << "Pilih menu yang ingin anda lakukan\n";
	cout << "1. Check-In\n" << "2. Check-Out\n" << "3. Informasi Kamar\n" << "4. Cari kamar\n";
	cout << "Pilihan anda (1/2/3/4): "; cin >> pilihan_menu;
	if (pilihan_menu == 1) checkIn();
	else if (pilihan_menu == 2) checkOut();
	else if (pilihan_menu == 3) infoKamar();
	else if (pilihan_menu == 4) cariNama();
}


int main()
{
	bool close = false;
	string pilihan;
	do {
		awal();
		cout << "\nApakah Anda ingin menutup aplikasi? (Y/N): "; cin >> pilihan;
		cout << endl;
		if (pilihan == "Y") close = true;
	} while (!close);

	return 0;

}
