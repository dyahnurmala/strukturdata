#include <iostream>
using namespace std;

int main(){
    int pil, c;
    char back;
    int a = 10;
    int b = 10;

    kurang:
        c=a-b;
        cout<<c<<endl;
    do{
        cout<<"0. Exit"<<endl;
        cout<<"1. Tambah"<<endl;
        cout<<"2. Kurang"<<endl;
        cout<<"input pilihan :";
        cin>>pil;
        switch (pil)
        {
        case 0:
            cout<<"exit"<<endl;
            break;
        case 1:
            c=a+b;
            cout<<c<<endl;
            break;
        default:
            cout<<"pilihan salah"<<endl;
            break;
        }
        cout<<"pilihan kembali?"<<endl;
        cin>>back;
    }
    while(back !='t');
    cout<<"thanks"<<endl;
    return 0;
}