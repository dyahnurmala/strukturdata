// Ini adalah Program C++ untuk mengimplementasikan Algoritma Pencarian Interpolasi.
#termasuk <iostream>
menggunakan  namespace std ;
 
// Cetak nilai array
batal print_ar ( int ar [ ] , ukuran int )
{
  untuk  ( int i =  0 ; i < ukuran ;  ++ i )
  {
    cout  << ar [ i ]  <<  "" ;
  }
    cout  << endl ;
}
 
//Pencarian Interpolasi
int interpolation_search ( int ar [ ] , nilai int , ukuran int )
{
  int rendah =  0 ;
  int tinggi = ukuran -  1 ;
  int pertengahan ;
 
  while  ( ar [ rendah ]  <= nilai && ar [ tinggi ]  >= nilai )
  {
    pertengahan = rendah +  ( ( nilai - ar [ rendah ] )  *  ( tinggi - rendah ) )  /  ( ar [ tinggi ]  - ar [ rendah ] ) ;
    jika  ( ar [ tengah ]  < nilai )
    {
      rendah = pertengahan +  1 ;
    }
    lain  jika  ( ar [ mid ]  > nilai )
    {
      rendah = pertengahan -  1 ;
    }
    kalau tidak
    {
      kembali pertengahan ;
    }
  }
 
  jika  ( ar [ rendah ]  == nilai )
  {
    kembali rendah ;
  }
  kalau tidak
  {
    kembali  - 1 ;
  }
}
 
//Fungsi Pengemudi
int utama ( )
{
  int ar [ ]  =  { 1 , 2 , 78 , 18 , 16 , 30 , 29 , 2 , 0 , 199 } ;
  nilai int , pos ;
 
  cout  <<  "Array Anda : " ;
  print_ar ( ar, 10 ) ;
 
  cout  <<  "Masukkan nilai yang dicari : " ;
  cin  >> nilai ;
  pos = pencarian_interpolasi ( ar, nilai, 10 ) ;
  jika  ( pos ! =  - 1 )
  {
    cout  <<  "Nilai Ditemukan! pada posisi : "  << pos +  1  << endl ;
  }
  kalau tidak
  {
    cout  <<  "Maaf, nilai yang Anda cari tidak ada."  << akhir ;
  }
 
  kembali  0 ;
}