#pragma once
#include <iostream>
#include "Wallet.hpp"

class Card : Wallet {
    int money;
    
public:
    Card(){
        money = 15;
    }
    Card(int b) : money{b}{}
    Card(const Card &a) : Wallet(a),money(a.money){};
    Card operator=(const Card &a);
    ~Card();
    void showMoney();
};