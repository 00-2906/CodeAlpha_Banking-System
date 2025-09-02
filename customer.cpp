#include <iostream>
#include "customer.h"
using namespace std;
void customer :: readinfo()
{
    cout<<"enter the phone number of holder:";
    cin>>phone_no;
    cout<<"enter the address of the acount holder:";
    cin.ignore();
    getline(cin,address);
    cout<<"enter the gender of acount holder:";
    cin>>gender;
}
void customer :: displayinfo()
{
    cout<<"the address of the acount holder:"<<address<<endl;
    cout<<"the phone number of acount holder:"<<phone_no<<endl;
    cout<<"the gender of the acount holder:"<<gender<<endl;
}