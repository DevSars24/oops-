#include <iostream>
using namespace std;

class vehicle {
public :

  virtual void move () {
  
    cout << "vehicle moves" << endl;

  }

};

class car : virtual public vehicle {
public :

void move() override {

cout << "car drives" << endl;

}
};


class bike : virtual public vehicle {
public :

void move() override {


    cout << "bike ride" << endl;
}
};



class hybrid : public car, public bike {
public :

void move () override {
    cout << "bike ride" << endl;
}

};






int main() {
    hybrid h;
    h.move(); // No ambiguity due to virtual inheritance
    return 0;
}