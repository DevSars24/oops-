#include <iostream> 

using namespace std;


class animal {
public: 
  void eat() {

    cout << "animal is eating" << endl;

  }

};


class dog : public animal {
public : 

void bark() {

 cout << "dog is barking" << endl;
 
  } 


};


int main() {

  dog d;
  d.eat();
  d.bark();

    return 0;
}