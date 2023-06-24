#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int temp, NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
    
    cout << "Data sebelum diurutkan : ";
    for (int i = 0; i < 8; i++)
    {
        cout << setw (3) << NumList[i];
    }
    cout << endl << endl;
    
    // proses pengurutan data
    for (int i = 1; i < 8; i++)
    {
        for (int j = 8-1; j >= i; j--) 
        {
            if (NumList[j] < NumList[j-1])
            {
                temp = NumList[j];
                NumList[j] = NumList[j-1];
                NumList[j-1] = temp;
            }
        }
    }
    
    // Print datanya sohib
    cout << "Data setelah diurutkan : " << endl;
    for (int i = 0; i < 8-1; i++)
    {
        cout << "Indeks ke-" << i << " = " << NumList[i] << endl;
    }
    return 0;
}