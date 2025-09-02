#pragma once
#include <iostream>
using namespace std;
#include "customer.h"
#include "acount.h"
class bank
{
    customer c[2];
    acount a[2];
    public:
    void read();
    void show();
    void deposit();
    void withdraw();
    void fundtransfer();
};