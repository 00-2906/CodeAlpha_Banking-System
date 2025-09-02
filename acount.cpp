#include <iostream>
#include "acount.h"
using namespace std;
void acount :: getinfo()
{
    cout<<"enter the name of acount holder:";
    cin.ignore();
    getline(cin,cname);
    for(int i=0;i<cname.length();++i)
    {
        if(cname[i]>='0' && cname[i]<='9')
            throw error(1);
    }
    cout<<"enter acount number:";
    cin>>acountno;
    if(acountno <0)
    {
        throw error(2);
    }
    cout<<"enter the balance in acount:";
    cin>>balance;
    if(balance <0)
    {
        throw error(3);
    }
}
void acount :: showinfo()
{
    cout<<"the customer with acount is:"<<cname<<endl;
    cout<<"the acount number of the acount holder is:"<<acountno<<endl;
    cout<<"balance in this acount:"<<balance<<endl;
}