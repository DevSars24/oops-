#include <iostream>
using namespace std;

class base {
public:

virtual void show() {

    cout << "base class show" << endl;
}

};



class derived : public base {
public :
  void show() override {

cout << "derived class show" << endl;

  }

};


int main() {

base* ptr;  


derived obj;
ptr = &obj;

ptr->show();
return 0;

}