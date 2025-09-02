#pragma once
#include <string>
using namespace std;
class acount
{
    string cname;
    int acountno;
    float balance;
    public:
    class error
    {
        int num;
        public:
        error(int n)
        {
            num=n;
        }
        void what()
        {
            if(num==1)
                cout<<"incorrect acount holder name"<<endl;
            else if(num==2)
                cout<<"incorrect acount number"<<endl;
            else if(num==3)
                cout<<"incorrect balance"<<endl;
        }
    };
    void getinfo();
    void showinfo();
    void create_new_acount();
    int tellacountno()
    {
        return acountno;
    }
    float tellbalance()
    {
        return balance;
    }
    void updatebalance(float acc)
    {
        balance=acc;
    }
};