#include<iostream>
using namespace std;

int main ()
{
    int ArraySize = 8, Numlist[8] = {2, 5, 8, 12, 15, 25, 37, 57};
    int temp, SearchingElement = 0;
    int start, middle, end, position;

    cout<<"Data Array :"<<endl;
    for(int i=0; i<ArraySize; i++)
    {
        cout<<"Indeks ke-"<<i<<" = "<<Numlist[i]<<endl;
    }
    cout<<endl<<endl;

    /*proses pengurutan data (digunakan apabila kebutuhan data array yang mau dicari belum diurutkan)*/
    for(int i=1; i<ArraySize; i++)
    {
        for(int j=ArraySize-1; j>=i; j--)
        {
            if (Numlist[j] < Numlist[j-1])
            {
                temp = Numlist[j];
                Numlist[j] = Numlist[j-1];
                Numlist[j-1] = temp;
            }
        }
    }
    cout<<"Data Array setelah diurutkan :"<<endl;
    for (int i=0; i<ArraySize; i++)
    {
        cout<<"Indeks ke-"<<i<<" = "<<Numlist[i]<<endl;
    }
    cout<<endl<<endl;
    
    cout<<"Masukkan data yang akan Anda cari =";
    cin>>SearchingElement;

    //proses pencarian data
    start = 0;
    end = ArraySize - 1;
    middle = (start + end)/ 2;
    position = -1;
    do
    {
        if(SearchingElement < Numlist[middle])
        {
            end = middle - 1;
        }
        else if(SearchingElement > Numlist[middle])
        {
            start = middle + 1;
        }
        middle = (start + end) / 2;
    }
    while(start <= end && SearchingElement != Numlist[middle]);

    if(SearchingElement == Numlist[middle]){
        position = middle;
    }

    if(position != -1)
    {
    cout << "\n\nData " << SearchingElement << " berada di index ke-" << position << endl;
    } else {
        cout << "\n\nMaaf, data " << SearchingElement << " tidak ada" << endl;
    }
    return 0;

}