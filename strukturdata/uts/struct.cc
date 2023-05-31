#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Biodata Mahasiswa  ##" << endl;
  cout << "====================================" << endl;
  cout << endl;
 
  string nama, nim, fakultas, jurusan, kota_asal, alamat;
 
  cout << "Nama mahasiswa: ";
  getline(cin,nama);
 
  cout << "NIM: ";
  getline(cin,nim);
 
  cout << "Fakultas: ";
  getline(cin,fakultas);
 
  cout << "Jurusan: ";
  getline(cin,jurusan);
 
  cout << "Kota Asal: ";
  getline(cin,kota_asal);
 
  cout << "Alamat: ";
  getline(cin,alamat);
 
  cout << endl;
 
  cout << "# Data Mahasiswa #"       << endl;
  cout << "=================="       << endl;
  cout << "Nama: "      << nama      << endl;
  cout << "NIM: "       << nim       << endl;
  cout << "Fakultas: "  << fakultas  << endl;
  cout << "Jurusan: "   << jurusan   << endl;
  cout << "Kota Asal: " << kota_asal << endl;
  cout << "Alamat: "    << alamat    << endl;
 
  return 0;
}