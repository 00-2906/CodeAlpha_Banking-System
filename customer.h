#pragma once
#include <string>
using namespace std;
class customer
{
    int phone_no;
    string address;
    char gender;
    public:
    customer()
    {
        phone_no=0;
        address.clear();
        gender=' ';
    }
    void readinfo();
    void displayinfo();
};