#include <iostream>
using namespace std;

class abstractclass {

    public:
    virtual void show() = 0;  //pure virtual function class

};

class derived : public abstractclass {


public : 
void show() {

cout << "abstraction in action !" << endl;

}
};


int main() {

derived obj;
obj.show();


    return 0;
}