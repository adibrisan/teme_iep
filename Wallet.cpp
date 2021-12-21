#include "Wallet.hpp"

void Wallet::showBallance(){
    std::cout << "You ballance is " << salary-expenses;
}

Wallet::Wallet(const Wallet& a){
    salary = a.salary;
    expenses = a.expenses;
}

Wallet Wallet::operator=(const Wallet &a){
    this->salary = a.salary;
    this->expenses = a.expenses;                 //item 10
    
    return *this;
} 

Wallet Wallet::operator=(const Wallet &a){          //self assigment safe & error safe -> method copy and swap
    Wallet temp(a);                             // item 11 -> il copiaza pe stack pe a si mai departe cand ajungem la cazul de stergere il sterge pe temp nu pe a            
    
    this->salary = temp.salary;
    this->expenses = temp.expenses;
    
    
    
    return *this;
}

Wallet::~Wallet(){
        //std::cout << "Your wallet was destroyed !" << std::endl;
}