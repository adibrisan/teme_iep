#include "Wallet.hpp"
#include "Card.hpp"

class UncopyableCar{
protected:
    UncopyableCar(){
        std::cout<<"Constructor";
    }
    ~UncopyableCar(){
        std::cout<<"Destructor";
    }
private:
    UncopyableCar(const UncopyableCar &var);
    UncopyableCar &operator=(const UncopyableCar &var);
};

class Car : private UncopyableCar{

};

int main(){
    //4
    Wallet w(150,30);
    w.showBallance();

    //5
    //Wallet w1; //default constructor here
    //std::cout << w1.nr << std::endl; 
    
   // Wallet w2(w); //copy constructor
    //w2.showBallance();

    Wallet w3,w4;
    w3 = w;     //copy assigment operator
    w3.showBallance();
    Card c1(15);
    c1.showMoney();
    //c1 = w;
   // w3.showBallance();
   // w4 = w3 + w;
   // w4.showBallance();

   //Wallet w4(30,20);

    //w4.~Wallet();
    
    //6
    //Car c;
    //Car c2; erori
   //c2 = c;

    return 0;
};