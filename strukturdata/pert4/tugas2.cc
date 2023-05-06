#include <iostream>

using namespace std;

int main()
{
    string a;

    int o=0;
    int j=0;
    int m=0;
    int l=0;
    string c;
    cout <<"Input : ";getline(cin,a); //inputtan menggunakan getline, agar karakter "spasi" dapat dibaca pada c++
    cout<<"Output : "<<endl;
    cout<<"Vokal : ";
    for (int z=0;z<a[z];z++) //looping menghitung jumlah huruf pada kalimat inputan
        {
            o++;
        }


            for (int g=0;g<o;g++) //looping cek total huruf vokal
                {
                    if (a[g]=='a'||a[g]=='i'||a[g]=='u'||a[g]=='e'||a[g]=='o'||a[g]=='A'||a[g]=='I'||a[g]=='U'||a[g]=='E'||a[g]=='O')
                        {
                            j++;
                        }
                }

    if (j>0) //jika paling tidak ada 1
        {
           cout<<j<<" = ";

            for (int g=0;g<o;g++)
                {
                   if (a[g]=='a'||a[g]=='i'||a[g]=='u'||a[g]=='e'||a[g]=='o'||a[g]=='A'||a[g]=='I'||a[g]=='U'||a[g]=='E'||a[g]=='O')
                        {
                            cout<<a[g]<<" ";
                        }
                }
        }
    else //jika tak ada sama sekali
        {
            cout<<"Tak ada...";
        }
cout<<endl;
cout<<"Konsonan : ";
            for (int g=0;g<o;g++) //looping menghitung jumlah huruf konsonan
                {
                    if (a[g]=='b'||a[g]=='c'||a[g]=='d'||a[g]=='f'||a[g]=='g'||a[g]=='h'||
                        a[g]=='j'||a[g]=='k'||a[g]=='l'||a[g]=='m'||a[g]=='n'||a[g]=='p'||
                        a[g]=='q'||a[g]=='r'||a[g]=='s'||a[g]=='t'||a[g]=='v'||a[g]=='w'||
                        a[g]=='x'||a[g]=='y'||a[g]=='z'||a[g]=='B'||a[g]=='C'||a[g]=='D'||
                        a[g]=='F'||a[g]=='G'||a[g]=='H'||a[g]=='J'||a[g]=='K'||a[g]=='L'||
                        a[g]=='M'||a[g]=='N'||a[g]=='P'||a[g]=='Q'||a[g]=='R'||a[g]=='S'||
                        a[g]=='T'||a[g]=='V'||a[g]=='W'||a[g]=='X'||a[g]=='Y'||a[g]=='Z')
                        {
                            m++;
                        }
                }

if (m>0) //jika paling tidak ada 1
    {
        cout<<m<<" = ";

            for (int g=0;g<o;g++)
                {
                    if (a[g]=='b'||a[g]=='c'||a[g]=='d'||a[g]=='f'||a[g]=='g'||a[g]=='h'||
                        a[g]=='j'||a[g]=='k'||a[g]=='l'||a[g]=='m'||a[g]=='n'||a[g]=='p'||
                        a[g]=='q'||a[g]=='r'||a[g]=='s'||a[g]=='t'||a[g]=='v'||a[g]=='w'||
                        a[g]=='x'||a[g]=='y'||a[g]=='z'||a[g]=='B'||a[g]=='C'||a[g]=='D'||
                        a[g]=='F'||a[g]=='G'||a[g]=='H'||a[g]=='J'||a[g]=='K'||a[g]=='L'||
                        a[g]=='M'||a[g]=='N'||a[g]=='P'||a[g]=='Q'||a[g]=='R'||a[g]=='S'||
                        a[g]=='T'||a[g]=='V'||a[g]=='W'||a[g]=='X'||a[g]=='Y'||a[g]=='Z')
                        {
                            cout<<a[g]<<" ";
                        }
                }

    }
else //jika tak ada sama sekali
    {
        cout<<"Tak ada...";
    }
cout<<endl;
cout<<"Masukkan data yang akan anda cari : ";cin>>c;
cout<<endl;
cout<<"Data yang anda cari adalah --> "<<c[0]<<endl;
//mengingat data string itu adalah data menyimpan karakter perblok, jadi blok yang kita pakai cukup blok 0 alias blok yang menyimpan karakter paling awal yang diinput
for (int g=0;g<o;g++) //looping mengitung jumlah data yang sama dengan data yang dicari
        {
            if (a[g]==c[0])
            {
                            l++;
            }
        }
cout<<endl;
if (l>0) //jika ada
    {
        cout<<"Data ditemukan, sebanyak "<<l<<" data";
    }
else //jika tidak ada
    {
        cout<<"Data tak ditemukan.... ";
    }
    return 0;
}