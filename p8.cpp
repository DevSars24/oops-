//run time polymorphism 

#include <iostream>
using namespace std;

class shape {
public: 
  virtual void draw() {   //virtual function
  cout << "drawing shape" << endl;

   }
};


class circle : public shape {

public:
   void draw() override {
  cout << "drawing circle" << endl;
   }
};


int main() {


shape* ptr;
circle c;
ptr = &c;
ptr->draw();
return 0;




}