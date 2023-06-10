#include <iostream>
using namespace std;
int main() {

    char cNama [5][50];
    float fNilai1[5], fNilai2[5], fHasil[5];

    //Proses Input Data
    for(int i=1; i<=2; i++)
    {
        cout<<"Input Data Ke-"<<i<<endl;
        cout<<"--------------"<<endl;

        cout<<"Nama Siswa : ";
        cin.getline(cNama[i], 50);

        cout<<"Nilai UTS : ";
        cin>>fNilai1[i];

        cout<<"Nilai UAS : ";
        cin>>fNilai2[i];

        fHasil[i] = (fNilai1[i] * 0.4) + (fNilai2[i] * 0.6);
        cout<<endl;

        cin.ignore(); }
        cout<<endl;

        //Tampilan Data
        cout<<"================================"<<endl;
        cout<<"Nama\tUTS\tUAS\tNilai Akhir"<<endl;
        cout<<"================================"<<endl;

        for(int i=1; i<=2; i++)
        {
            cout<<cNama[i]<<"\t";
            cout<<fNilai1[i]<<"\t";
            cout<<fNilai2[i]<<"\t";
            cout<<fHasil[i]<<"\t";
        }
        return 0;
}
