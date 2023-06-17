#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    int ArraySize = 8, Numlist[8] = {25, 34, 41, 56, 63, 72, 88, 96};
    int SearchingElement = 0, flag = -1;
    int low, high, pos;
    float position;

    cout<<"Data Array :"<<endl;
    for(int i=0; i<ArraySize; i++)
    {
        cout<<"Indeks ke-"<<i<<" = "<<Numlist[i]<<endl;
    }
    cout<<endl<<endl;

    cout<<"Masukkan data yang akan Anda cari = ";
    cin>>SearchingElement;


    //proses pencarian data
    low = 0;
    do
    {
        position = ((SearchingElement - Numlist[low])/(Numlist[high] - Numlist[low]));
        position = position * (high - low) + low;
        pos = floor(position);

        if(SearchingElement == Numlist[pos])
        {
            flag = pos;
            break;
        }

        if(SearchingElement < Numlist[pos])
        {
            high = pos - 1;
        }
        else if(SearchingElement > Numlist[pos])
        {
            low = pos + 1;
        }
    }
    while(SearchingElement >= Numlist[low] && SearchingElement <= Numlist[high]);

    if(flag != -1)
    {
        cout<<"\n\nData "<<SearchingElement<<"berada di Indek ke- "<<flag<<endl;
    }
    else
    {
        cout<<"\n\nMaaf, Data "<<SearchingElement<<" tidak ada."<<endl;
    }
}