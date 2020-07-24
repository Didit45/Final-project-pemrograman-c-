//PERPUSTAKAAN
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

string daftar[5]={
	"Bahasa pemrograman", "Algoritma & instruktur data", "Teknik Penjaringan", "Kalkulus", "Dasar CyberSecurity"
};
void menu_utama(); 	//fungsi
void cari();
void baca();
void pinjam_buku();
void pengembalian_buku();
void log_out();

// fungsi loading
void loading()
{
	cout << endl;
	cout << "\t\t\t\tPlease wait";
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\tLoading";
	for(int i=0;i<20;i++)
	{
		cout << ". ";
		Sleep(100);
	}
cout << endl;
system("cls");
}

// fungsi menu utama
void menu_utama()
{
	system("cls");
	loading();
	cout << "\t==========================================================" <<endl; Sleep(200);
	cout << "\t|                                                       |" <<endl; Sleep(200);
	cout << "\t|\tPERPUSTAKAAN UNIVERSITAS AMIKOM YOGYAKARTA\t|" <<endl; Sleep(200);
	cout << "\t|                                                       |" <<endl; Sleep(200);
	cout << "\t==========================================================" <<endl; Sleep(200);
	cout << endl;
	cout << "\tSelamat Datang di Perpustakaan Kami" <<endl;
	cout << endl;
	cout << "\tPilihan Menu:" << endl;
	cout << "\t1. Cari Buku" << endl;
	cout << "\t2. Baca Buku" << endl;
	cout << "\t3. Pinjam Buku" << endl;
	cout << "\t4. Pengembalian Buku" << endl;
	cout << "\t5. Logout " << endl;
	cout << endl;
	int pilihan;
	cout << "\tMasukan Pilihan : "; cin >> pilihan;
	cout << endl;
	switch (pilihan)
	{
		case 1:
		cari(); break;
		case 2:
		baca(); break;
		case 3:
		pinjam_buku(); break;
		case 4:
		pengembalian_buku(); break;
		case 5:
		log_out(); break;
		default:
		system("cls");
		cout << endl;
		cout << "\t\t Pilihan Anda Tidak Ada Silahkan Ulangi Lagi!";
		cout << endl;
		cout << endl;
		loading();
		break;
	}
}

// fungsi perulangan
void ulangi()
{
	char pilih;
	cout << endl;
	cout << "\tInputkan [Y] Untuk Kembali ke Menu Utama." <<endl;
	cout << "\tInputkan [N] Untuk Keluar Dari Program." <<endl;
	cout << "\t[Y/N]...?\t: ";
	cin >> pilih;
	if (pilih=='Y' || pilih=='y')
	 { menu_utama(); }
	else if (pilih=='N' || pilih=='n')
	 { log_out(); }
	else
	 { system("cls");
	 	cout << endl;
	 	cout << "\t\t Silahkan Ulangi Kembali! Terima Kasih!" <<endl;
	 	cout << endl;
	 	cout << endl;
	 	loading();
	 }
}

// fungsi pencari buku
void cari()
{
	system("cls");
	cout << "\t=======================================================" <<endl;
	cout << "\t|\t	DAFTAR BUKU	\t|" <<endl;
	cout << "\t=======================================================" <<endl;
	cout << "\tKode : \tJudul Buku" <<endl;
	cout << "\t=======================================================" <<endl;
	cout << endl;
for (int i=0;i<5;i++)
		{ cout << "\t" <<(i+1)<< ".\t" <<daftar[i]<<endl; }   // ARRAY

	cout << "\t=======================================================" <<endl;
	cout << endl;

	int kode[6]={0, 1, 2, 3, 4, 5};
	int cari,index;
	int ketemu=0;

	cout << "\tInputkan Kode Buku Yang Akan Dicari : ";
	cin >> cari;

	for(int i=0; i<=5; i++)
	{ 
		if(kode[i] == cari)
		{ 	
			ketemu=1;
			index=i;
		}
	}

	if (ketemu==1)
	{
		cout << "\n\t======================================================" <<endl;
		cout << "\tBuku Terletak di Urutan ke - " << index <<endl; 
	}
	else
		cout << "\n\tBuku Tidak Tersedia" <<endl;
	
   switch (ketemu==1)
   {
	case 1:
		cout << "\n\tJudul Buku : " <<daftar[index-1]<<endl;
		break;
	case 2:
		cout << "\tJudul Buku : " <<daftar[index-1]<<endl;
		break;
	case 3:
		cout << "\tJudul Buku : " <<daftar[index-1]<<endl;	
		break;
	case 4:
		cout << "\tJudul Buku : " <<daftar[index-1]<<endl;	
		break;
	case 5:
		cout << "\tJudul Buku : " <<daftar[index-1]<<endl;	
		break;
		cout << endl;
	default:
		cout << "\tBuku dengan kode tersebut tidak ada." <<endl;
		break;	
	}
	ulangi();
}

// fungsi baca
void baca()
{
	system("cls");
	cout << "\t======================================================" <<endl;
	cout << "\t|\t\ MEMBACA BUKU \t\t|" <<endl;
	cout << "\t======================================================" <<endl;
	cout << "\tKode : \tJudul Buku" <<endl;
	cout << "\t======================================================" <<endl;
	cout << endl;
	for (int i=0;i<5;i++)
		{ cout << "\t" <<(i+1)<< ".\t" <<daftar[i]<<endl; }  //ARRAY
	cout << "\t======================================================" <<endl;
	cout << endl;
	char nama[20];
	cout << "\tNama : ";
	cin >> nama;
	
	cout << endl;
	int x, jumlah, kode;
	cout << "\tJumlah Buku Yang Ingin Anda Baca : ";
	cin >> jumlah;
	for (x=0;x<jumlah;x++)	{
		cout << endl;
		cout << "\tInputkan Kode Buku : "; cin >> kode;
		 switch (kode)
		 { case 1:
		 	cout << "\n\t======================================================" <<endl;
   			cout << "\n\tSelamat Membaca Buku : " <<daftar[0]<<endl;
   			break;
   			case 2:
  		 	cout << "\tSelamat Membaca Buku : " <<daftar[1]<<endl;
   			break;
   			case 3:
  		 	cout << "\tSelamat Membaca Buku : " <<daftar[2]<<endl;
   			break;
   			case 4:
  		 	cout << "\tSelamat Membaca Buku : " <<daftar[3]<<endl;
   			break;
   			case 5:
  		 	cout << "\tSelamat Membaca Buku : " <<daftar[4]<<endl;
   			break;
   			default:
  		 	cout << "\tBuku dengan kode tersebut tidak tersedia."<<endl;
   			break;
		 }
	}
cout << endl;
ulangi();
}

// fungsi peminjaman buku
void pinjam_buku()	{
	ofstream notepad;
	notepad.open("STRUCK_PEMINJAMAN.txt");
system("cls");
cout << "\t======================================================" <<endl;
cout << "\t|\t\t	PINJAM BUKU  	\t\t|" <<endl;
cout << "\t=======================================================" <<endl;
cout << "\tKode : \tJudul Buku" <<endl;
cout << "\t=======================================================" <<endl;
cout << endl;
for (int i=0;i<5;i++) {
cout << "\t" <<(i+1)<< ".\t" <<daftar[i]<<endl; }
cout << "\t=======================================================" <<endl;
cout << endl;
char nama[20];
cout << "\tNama : ";
cin >> nama;
int tanggal;
int tgl1=0;
cout << "\tMasukan tanggal pinjam (1-31): ";
cin >> tanggal;
if ((tanggal<0)  ||  (tanggal>31)) {
cout << "\tInput tanggal salah!" <<endl; }
else {
	if (tanggal<25)
	{ tgl1=tanggal+7; }
	if (tanggal>=25)
	{ tgl1=(tanggal+7)-30; }
}
cout << endl;
int x, jumlah;
cout << "\tJumlah Buku Yang Anda Pinjam : "; cin >> jumlah;
for (x=0;x<jumlah;x++) {
	int kode;
	cout << endl;
	cout << "\tInputkan Kode Buku : "; cin >> kode; 
	  switch (kode)
	 {
   	 case 1:
   		cout << "\tAnda telah meminjam buku : " <<daftar[0]<<endl;
   		break;
   	 case 2:
    	cout << "\tAnda telah meminjam buku : " <<daftar[1]<<endl;
   		break;
     case 3:
		cout << "\tAnda telah meminjam buku : " <<daftar[2]<<endl;	
    	break;
     case 4:
		cout << "\tAnda telah meminjam buku : " <<daftar[3]<<endl;	
    	break;
     case 5:
		cout << "\tAnda telah meminjam buku : " <<daftar[4]<<endl;	
    	break;
    	default:
    	cout << "\tBuku dengan kode tersebut tidak tersedia."<<endl;
   		break;	}
   		
}
cout<<endl;
cout<<"\t";
for (int i=0;i<=56;i++)
   {  cout<<"-";
   Sleep(30);  }
  cout<<endl;
  cout<<"\tDetail : "<<endl;
  cout<<"\tNama Peminjam                  : "<<nama<<endl;
  cout<<"\tJumlah buku yang dipinjam      : "<<jumlah<<"Buku"<<endl;
  cout<<"\tTanggal Peminjam               : "<<tanggal<<endl;
  cout<<"\tTanggal kembali (7 hari)       : "<<tgl1<<endl;
  cout<<endl;
  cout<<" -NB : JIKA PEMINJAM LEBIH DARI 7 HARI MAKA DIKENAKAN DENDA "<<endl;
  cout<<endl;
  {
  	notepad<<"\tBUKTI PEMINJAMAN DI PERPUSTAKAAN AMIKOM"<<endl;
  	notepad<<"\t---------------------------------------"<<endl;
  	notepad<<"\tNama Peminjam                  : "<<nama<<endl;
  	notepad<<"\tJumlah buku yang dipinjam      : "<<jumlah<<"Buku"<<endl;
	notepad<<"\tTanggal Peminjam               : "<<tanggal<<endl;
  	notepad<<"\tTanggal kembali (7 hari)       : "<<tgl1<<endl;
  	notepad<<endl;
  	notepad<<" -NB : JIKA PEMINJAM LEBIH DARI 7 HARI MAKA DIKENAKAN DENDA "<<endl;
}
  ulangi();
}


//Pengembalian buku
void pengembalian_buku()
{
	system("cls");
	cout<<"\t============================================================"<<endl;
	cout<<"\t|\t\t  PENGEMBALIAN BUKU  \t\t|"<<endl;
	cout<<"\t============================================================"<<endl;
	cout<<endl;
	cout<<"\tKode : \Judul Buku"<<endl;
	cout<<"\t============================================================"<<endl;
	cout<<endl;
	for (int i=0;i<5;i++) {
		cout<<"\t"<<(i+1)<<".\t"<<daftar[i]<<endl; }
		cout<<"\t============================================================"<<endl;
		cout<<endl;
		char nama[20];
		cout<<"\Nama : ";
		cin>>nama;
		int tanggal;
		int tgl1=0 ,lama, telat,byr;
		cout<<"\Masukan tanggal pinjam (1-31) : ";
		cin>>tanggal;
		cout<<"\Masukan tanggal kembali (1-31) : ";
		cin>>tgl1;
		
		if(tgl1<tanggal) {
		lama=(tgl1+30)-tanggal; }
		else{
		lama=tgl1-tanggal; }
		
		cout<<endl;
		int x, jumlah, kode;
		cout<<"\tJumlah Buku yang ingin anda Kembalikan : "; cin>>jumlah;
		cout<<"\t=====================================================";
		cout<<endl;
		for (x=0;x<jumlah;x++) {
			cout<<endl;
			cout<<"\tInputkan Kode Buku : "; cin>>kode;
			switch (kode) 
			{ case 1:
   			cout << "\n\tAnda telah Mengembalikan Buku : " <<daftar[0]<<endl;
   			break;
   			case 2:
  		 	cout << "\tAnda telah Mengembalikan Buku : " <<daftar[1]<<endl;
   			break;
   			case 3:
  		 	cout << "\tAnda telah Mengembalikan Buku : " <<daftar[2]<<endl;
   			break;
   			case 4:
  		 	cout << "\tAnda telah Mengembalikan Buku : " <<daftar[3]<<endl;
   			break;
   			case 5:
  		 	cout << "\tAnda telah Mengembalikan Buku : " <<daftar[4]<<endl;
   			break;
   			default:
  		 	cout << "\tBuku dengan kode tersebut tidak tersedia."<<endl;
   			break;
		 }
 }
	cout<<endl;
	cout<<"\t";
	for (int i=0;i<=48;i++)
	 { cout<<"-";
		 Sleep(30); }
	    cout<<endl;
		
	if(lama<=7) {
	cout<<"\tDetail : "<<endl;
  	cout<<"\tNama Peminjam                  : "<<nama<<endl;
  	cout<<"\tJumlah buku yang dipinjam      : "<<jumlah<<"Buku"<<endl;
  	cout<<"\tTanggal Peminjam               : "<<tanggal<<endl;
  	cout<<"\tTanggal dikembalikan           : "<<tgl1<<endl;
  	cout<<"\t=====================================================";
	}
	
	else{
	telat=lama-6;
	byr=(jumlah*1000*telat); //denda
	cout<<"\tDetail : "<<endl;
  	cout<<"\tNama Peminjam                  : "<<nama<<endl;
  	cout<<"\tJumlah buku yang dipinjam      : "<<jumlah<<"Buku"<<endl;
  	cout<<"\tTanggal Peminjam               : "<<tanggal<<endl;
  	cout<<"\tTanggal dikembalikan           : "<<tgl1<<endl;
	cout<<"\t=====================================================";
	cout<<"\n\tLama peminjaman anda adalah              :"<<lama+1<<" Hari"<<endl;
	cout<<"\tAnda terlambat mengembalikan buku selama   :"<<telat<<" Hari"<<endl;
	cout<<"\tanda harus membayar denda sejumlah         :"<<byr<<" "<<endl;
	}
	ulangi();
}

// log out
void log_out() {
	system("cls");
	cout<<endl;
	cout << "\t===========================================================" <<endl;
	cout << "\t|                                                        |" <<endl;
	cout << "\t|\tPERPUSTAKAAN UNIVERSITAS AMIKOM YOGYAKARTA\t |" <<endl;
	cout << "\t|                                                        |" <<endl;
	cout << "\t===========================================================" <<endl;
	cout << endl;
	cout << "\n\t---  UNIVERSITAS AMIKOM YOGYAKARTA PALING TOP!    ---" <<endl;
	
	cout << "\n\t---  ANAK-ANAK TEKNIK KOMPUTER 01 JOSSSSSSS!!!!!    ---" <<endl;
	
	cout << "\n\t---  Terima Kasih atas Kunjungan anda!    ---" <<endl;
	cout << endl;
	cout<<"\n\tPlease wait ";
	for (int i=0;i<15;i++) {
		cout<<". ";
		Sleep(100); }
}

int main()
{
	menu_utama();
}


