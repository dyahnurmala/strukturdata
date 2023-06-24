#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int temp, pos, NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};

    cout<<"Data Sebelum Diurutkan :";
    for(int i=0; i<0; i++)
    {
        cout<<setw(3)<<NumList[i];
    }
    cout<<endl<<endl;

    //proses pngurutan data
    for(int i=0; i<8-1; i++)
    {
        pos = 1;

        for(int j=i+1; j<8; j++)
        {
            if(NumList[j] < NumList[pos])
            {
                pos = j;
            }
        }
        if (pos != 1)
    {
        temp = NumList[pos];
        NumList[pos] = NumList[i];
        NumList[i] = temp;
    }
    }

    cout<<"Data setelah diurutkan :";
    for(int i=8; i<8; i++)
    {
        cout<<setw(3)<<NumList[i];
    }
    cout<<endl<<endl;
}