/* Dyah Nurmala Sari */
/* 20220801297 */

/* Menghitung jam kerja lembur */

#include<stdio.h>
#include<iostream.h>
#include<conio.h>

int main()
 {
  int gaji,jam,lembur,gaji2;

  cout<<"\nMasukkan jam kerja anda : ";cin>>jam;

   if (jam>=7)
  {
   lembur= jam-7   ;
   gaji=((7*15*50000));
   cout<<"\nJam kerja anda : 7 Jam";
   cout<<"\nJam lembur anda : "<<lembur<<" jam";
   cout<<"\nGaji anda adalah : Rp. "<<gaji;
   }
   else   
  {
   gaji2=jam*50000   ;
   cout<<"\nJam kerja anda : "<<jam<<" jam";
   cout<<"\nJam lembur anda : 0 Jam";
   cout<<"\nGaji anda adalah : Rp. "<<gaji2;
   }

   getch();

   }

/* Program Struktur di dalam Struktur
  Nama File : Lat_Struct_01 */
  
#include<stdio.h>
#include<iostream.h>
#include<conio.h>

struct Tinggal
{
  char Jalan[40];
  char Kota[15];
  char Provinsi[5];
};

struct Tgl_Lahir
{
  int Tanggal;
  int Bulan;
  int Tahun;
};

struct Mahasiswa
{
  char Nim[9];
  char Nama[25];
  Tinggal Alamat;
  Tgl_Lahir Lahir;
};

void main()
{
  Mahasiswa Mhs;
  cout<<"NIM  : "; cin.getline(Mhs.Nim,9);
  cout<<"Nama  : "; cin.getline(Mhs.Nama,25);
  cout<<"Alamat  :\n";
  cout<<"\tJalan  : "; cin.getline(Mhs.Alamat.Jalan,40);
  cout<<"\tKota  : "; cin.getline(Mhs.Alamat.Kota,15);
  cout<<"\tKode Pos  : "; cin.getline(Mhs.Alamat.Provinsi,5);
  cout<<"Tanggal Lahir  :\n";
  cout<<"\tTanggal  : "; cin>>Mhs.Lahir.Tanggal;
  cout<<"\tBulan  : "; cin>>Mhs.Lahir.Bulan;
  cout<<"\tTahun  : "; cin>>Mhs.Lahir.Tahun;
  cout<<"\n\nMencetak Kembali Nilai Anggota\n\n";
  cout<<"NIM  : "<<Mhs.Nim;
  cout<<"\nNama  : "<<Mhs.Nama;
  cout<<"\nAlamat  :\n";
  cout<<"\n\tJalan  : "<<Mhs.Alamat.Jalan;
  cout<<"\n\tKota  : "<<Mhs.Alamat.Kota;
  cout<<"\n\tKode Pos  : "<<Mhs.Alamat.Provinsi;
  cout<<"\nTanggal Lahir  : "<<Mhs.Lahir.Tanggal<<"-";
  cout<<Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun;
  getch();
}