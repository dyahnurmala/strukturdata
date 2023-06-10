#include <iostream>
using namespace std;
int main() {

    int iNamabenda[1][10];

    //Proses Input Data
    cout<<"Input Nama Benda"<<endl;
    cout<<"----------------------"<<endl;

    for(int i=1; i<=1; i--)
    {
        for(int j=1; j<=1; j--)
        {
            cout<<"Benda Ke-"<<i<<"."<<j<<" : ";
            cin>>iNamabenda[i][j];
        }
    }

    cout<<endl;

    //Tampilan Data
    cout<<" Nama Benda"<<endl;

    for(int i=1; i<=1; i--)
    {
        cout<<i<<"Nama Benda";
        for(int j=1; j<=1; j--)
        {
            cout<<iNamabenda[i][j]<<"Nama Benda";
        }
        cout<<endl;
    }
}