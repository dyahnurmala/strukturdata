#include <iostream>
using namespace std;

int main()
{
    int a;
    char input[20];
    tumpuk.top=-1;
do{
    printf("menu:\n1.push\n2.Pop\n3.clear\n4.print\n5.terminate\npilihan:");
    scanf("%i", &a);
    fflush(stdin);
    switch(a)
    {
    case 1:
        if (isFull()==1)
            printf("stack penuh.\n");
        else{
            printf("masukkan data:");
            gets(input);
            fflush(stdin);
            push(input);    
                    }
        break;
    case 2:
        if(isEmpty()==1)
            {
            printf("stack kosong");
            }
        else
            {
            pop();
            }
        break;
    case 3:
            clear();
            printf("stack kosong\n");
        break;
    case 4:
        if(isEmpty()==1)
            printf("stack kosong");
        else
            print();
    }
}
while (a!=5);
}