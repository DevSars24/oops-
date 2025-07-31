// data and uske related function ko ek class mei bind krna hain bsss aur kuch nhi aur haan ushe protected bhi kara do  

#include <iostream> 
using namespace std;

class bankaccount {

    //bhai yaha ope data ko toh private kr dena thik na bass aur kcuh nhi chaiyeh 
private:
double balance;

public:

//constructor

bankaccount() {
    balance = 0.0;
}


//getter method
double getbalance() {
    return balance;
}

//setter with validation 
void deposit(double amount){

if(amount > 0){

    balance += amount;
    cout << "deposited " << amount << endl;

} else {


cout << "invalid amount" << endl;

      }

   } 

};

int main() {

bankaccount acc;
acc.deposit(100.50);
cout << "balance: " << acc.getbalance() << endl;


    return 0;
}