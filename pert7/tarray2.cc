#include<iostream>
#include<string.h> 

using namespace std;

int main(){
    
    char kata[20];
    
    cout << "\t Program Membalik Kata / string \n\n";
    
    // Masukkan kata yang akan di uji
    cout << " Masukkan Sebuah Kata : ";
    cin >> kata;
    
    cout << " Kata Setelah Dibalik : ";
    // Fungsi untuk membalikkan kata
    for(int i = strlen(kata) - 1; i >= 0; i--){
        
        cout << kata[i] << " ";
    }
}