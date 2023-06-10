#include <iostream>
using namespace std;
int main() {

    int iDataJual[4][4];

    //Proses Input Data
    cout<<"Input Jumlah Penjualan"<<endl;
    cout<<"----------------------"<<endl;

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cout<<"Data Ke-"<<i<<"."<<j<<" : ";
            cin>>iDataJual[i][j];
        }
    }

    cout<<endl;

    //Tampilan Data
    cout<<" Data Penjualan Pertahun"<<endl;
    cout<<"=============================="<<endl;
    cout<<"No. \t2001\t2002\t2003"<<endl;
    cout<<"=============================="<<endl;

    for(int i=1; i<=3; i++)
    {
        cout<<i<<"\t";
        for(int j=1; j<=3; j++)
        {
            cout<<iDataJual[i][j]<<"\t";
        }
        cout<<endl;
    }
}