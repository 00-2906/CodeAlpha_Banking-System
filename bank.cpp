#include <iostream>
#include "bank.h"
using namespace std;
void bank :: read()
{
    for(int i=0;i<2;++i)
    {
        try
        {
            c[i].readinfo();
            a[i].getinfo();
        }
        catch(acount :: error e)
        {
            e.what();
            --i;
            break;
        }
    }
}
void bank :: show()
{
    for(int i=0;i<2;++i)
    {
        c[i].displayinfo();
        a[i].showinfo();
    }
}
void bank :: withdraw()
{
    bool find=false;
    float b;
    int ac;
    float acc;
    cout<<"enter the acount number to find:";
    cin>>ac;
    for(int i=0;i<2 && find==false;++i)
    {
        if(ac==a[i].tellacountno())
        {
            cout<<"enter balance to withdraw:";
            cin>>b;
            find=true;
            if(b <= a[i].tellbalance())
            {
                acc=a[i].tellbalance();
                acc=acc-b;
                a[i].updatebalance(acc);
                a[i].showinfo();
            }
            else
                cout<<"insufficient balance"<<endl;
        }
    }
        if(find==false)
           cout<<"the acount not found"<<endl;
}
void bank :: deposit()
{
    float bal;
    bool find=false;
    int ac;
    float acc;
    cout<<"enter the acount number to find:";
    cin>>ac;
    for(int i=0;i<2 && find==false;++i)
    {
        if(ac==a[i].tellacountno())
        {
            find=true;
            cout<<"enter the amount to deposit:";
            cin>>bal;
            acc=a[i].tellbalance();
            acc=acc+bal;
            a[i].updatebalance(acc);
            a[i].showinfo();
        }
    }
    if(find !=true)
        cout<<"acount not found"<<endl;
}
void bank :: fundtransfer()
{
    cout<<"-----------WELCOME TO FUND TRANSFER SERVICE OF OUR BANK----------------"<<endl;
    int ac;
    float b;
    int acc;
    bool find=false;
    bool found=false;
    string bank_name;
    string banks[]={"hbl","allied bank","ubl","mezan bank","nbp"};
    cout<<"enter the acount number:";
    cin>>ac;
    for(int i=0;i<2 && find==false;++i)
    {
        if(ac==a[i].tellacountno())
        {
            find=true;
            cout<<"enter name of bank to transfer funds:";
            cin.ignore();
            getline(cin,bank_name);
            for(int i=0;i<5 && found==false;++i)
            {
                if(bank_name==banks[i])
                {
                    found=true;
                    cout<<"bank found"<<endl;
                    cout<<"enter the balance to transfer:";
                    cin>>b;
                }
            }
            if(found !=true)
            {
                cout<<"The bank choice is invalid"<<endl;
                break;
            }
            if(b<=a[i].tellbalance())
            {
                acc=a[i].tellbalance();
                acc=acc-b;
                a[i].updatebalance(acc);
                a[i].showinfo();
                cout<<"the transfer process happened succesfully"<<endl;
            }
            else
                cout<<"enter valid amount for transfer"<<endl;
        }
    }
    if(find !=true)
        cout<<"account not found"<<endl;
}