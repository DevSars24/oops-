//compile time polymorphism 


#include <iostream>
using namespace std;


class printer {

  public:

    void print(int x) {

    cout << "integer : " << x << endl; 

    }


void print(string s){

cout << "string : " << s << endl; 

  } 

};

int main() {

printer p;

p.print(42);
p.print("hello");

    return 0;
}