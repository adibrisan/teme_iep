#pragma once
#include <iostream>



class Wallet{
    int salary;
    int expenses;
                    
public:
    int nr = 0;
    Wallet(){
        nr = 15;
    }
    Wallet(int b,int e) : salary{b}, expenses{e}{}
    Wallet(const Wallet& a);
    Wallet operator=(const Wallet &a);
    Wallet operator+(const Wallet &a);
    ~Wallet();
    void showBallance();
};