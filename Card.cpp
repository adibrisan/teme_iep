#include "Card.hpp"

void Card::showMoney(){
    std::cout << "Your money:" << money;
}

Card Card::operator=(const Card &a){
    std::cout << "Card class copy assigment \n";                //item 12
    Wallet::operator=(a);
    this->money = a.money;

    return *this;
}

Card::~Card(){
        //std::cout << "Your wallet was destroyed !" << std::endl;
}