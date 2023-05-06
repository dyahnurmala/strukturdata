#include <iostream>

using namespace std;

int main(){
    int a, b, da;
    cout <<"masukkan jumlah beli : ";
    cin >> a;
    cout <<"masukkan jumlah bayar : ";
    cin >> b;
    cout<<"jumlah beli : "<<a<<endl;
    cout<<"jumlah bayar : "<<b<<endl;
    da = b-a;
    cout<<"kembaliannya : "<<da<<endl;
    return 0;
}