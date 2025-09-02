/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "bank.h"
using namespace std;
int main()
{
    int choice;
    bank b;
    cout<<"-----------BANKING SYSTEM---------"<<endl;
    do{
        cout<<"THE ACOUNT CREATION"<<endl;
        cout<<"THE INFORMATION OF ALL ACOUNTS"<<endl;
        cout<<"WITHDRAW OF MONEY"<<endl;
        cout<<"DEPOSIT OF AMOUNT"<<endl;
        cout<<"FUNDS TRANSFER"<<endl;
        cout<<"________________________________"<<endl;
        cout<<"enter the choice:";
        cin>>choice;
        if(choice==1)
            b.read();
        else if(choice==2)
            b.show();
        else if(choice==3)
            b.withdraw();
        else if(choice==4)
            b.deposit();
        else if(choice==5)
            b.fundtransfer();
        else 
            cout<<"invlaid option choosen"<<endl;
    }while(choice !=6);

    return 0;
}