#include<iostream>
using namespace std;

int main (){
    int ArraySize = 7, Numlist[7] = {19, 27, 5, 99, 88, 32, 72};
    int SearchingElement = 0, flag = -1;

    cout<<"Data Array : "<<endl;
    for(int i=0; i<ArraySize; i++)
    {
        cout<<"Indeks ke-"<<i<<" = "<<Numlist[i]<<endl;
    }
    cout<<endl<<endl;

    cout<<"Masukkan data yang akan Anda cari = ";
    cin>>SearchingElement;

    //Proses pencarian data
    for(int i=0; i<ArraySize; i++)
    {
        if(SearchingElement == Numlist[i])
        {
            flag = i;
        }
    }
    if(flag != -1)
    {
        cout<<"\n\nData "<<SearchingElement<<" berada di Indeks ke-"<<flag<<endl;
    }
    else
    {
        cout<<"\n\nMaaf, Data "<<SearchingElement<<" tidak ada."<<endl;
    }
}
