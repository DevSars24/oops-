#include <iostream>
using namespace std;

class payment {
public:
  

//pure virtual function -> thus making payment class as an abstract class over here 
virtual void process() = 0;
virtual ~payment() {};   //-> virtual destructor actually quite safe for base class pointers

};

class creditcard : public payment {
public :

void process() override {

cout << "processing credit card payment" << endl;

}
};


class paypal : public payment {
public :

void process() override {

cout << "processing paypal payment";

}

};


template <typename T>
class paymentprocessor {
public :
   
void execute(T& payment) {
  payment.process();

}

};



int main() {

 payment* payment = new creditcard();
 payment->process();


 delete payment;

 payment = new paypal();

 payment->process();

 delete payment;




creditcard cc;
paypal pp;
paymentprocessor<creditcard> proc1;
paymentprocessor<paypal> proc2;



proc1.execute(cc);
proc2.execute(pp);


    return 0;
}



