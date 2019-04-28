#include <iostream.h>;
#include <conio.h>
void main(){
  char kode ;
  char *nm_hari;
  cout<<"  LATIHAN MENENTUKAN NAMA HARI   \n";
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout<<"Input Kode hari A-G/a-g = "; cin>>kode;
  clrscr();
	if (kode == 'A'|| kode == 'a'){
  	nm_hari = "Senin"  ; }

   else if (kode == 'B'|| kode == 'b'){
   nm_hari = "Selasa" ; }

   else if (kode == 'C'||kode == 'c'){
   nm_hari = "Rabu" ; }

   else if (kode == 'D'||kode == 'd'){
   nm_hari = "Kamis" ; }

   else if(kode == 'E'||kode == 'e') {
   nm_hari = "Jumat" ; }

   else if (kode == 'F'||kode == 'f'){
   nm_hari = "Sabtu" ; }

   else if (kode == 'G'||kode == 'g') {
   nm_hari = "Ahad" ;  }

   else {
   cout<<"Kode yang anda masukkan salah!\n"; }

cout<<endl;
cout<<"       TAMPILAN PILIHAN ANDA       \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
cout<<"Kode hari yang anda pilih  "<<kode<<"\n";
cout<<"Nama hari = "<<nm_hari<<"\n";
getch(); }