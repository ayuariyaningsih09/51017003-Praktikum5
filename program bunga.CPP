#include <iostream.h>;
#include <conio.h>
void main(){
	char kode ;
   char nama[30], *bunga ;
   int harga, bayar ;
   int jumlah ;
   harga = 0 ;
   clrscr();
   cout<<"      AHLISTHIR FLORIST           \n";
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   cout<<"Nama Pembeli    : "; cin>>nama;
   cout<<"\n";
   cout<<"Input kode bunga : "; cin>>kode;
   cout<<"Input Jumlah Beli: "; cin>>jumlah;
   clrscr();
   if ((kode=='a')|| (kode == 'A')){
   harga = 100000;
   bunga = "Mawar";
   }
   else if ((kode == 'b')||(kode == 'B')){
   bunga = "Melati";
   harga = 200000 ;
   }
   else if ((kode=='c')||(kode == 'C')){
   bunga = "Anggrek";
   harga = 300000;
   }
   else if ((kode =='d')||(kode=='D')){
   bunga = "Nusa Indah";
   harga = 400000;
   }
   else {
   cout<<"Tidak ada kode yang sesuai";}

   cout<<"       STRUK PEMBAYARAN      \n";
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   cout<<"Nama Pembeli     :   "<<nama<<"\n";
   cout<<"Jenis Bunga      :   "<<bunga<<"\n";
   cout<<"Harga Per satuan :   "<<harga<<"\n";
   cout<<"Jumlah Beli      :   "<<jumlah<<"\n";
   cout<<"-----------------------------\n";
   cout<<"\tTotal Harga  : Rp.  "<<harga * jumlah<<"\n";
   cout<<"\tUang Bayar   : Rp.  "; cin>>bayar ;
   cout<<"\tUang Kembali : Rp.  "<<bayar - (harga * jumlah)<<"\n\n";
   cout<<"~~~~~~~~~~~~~~ TERIMA KASIH ~~~~~~~~~~~~~~";
   getch();
   }
