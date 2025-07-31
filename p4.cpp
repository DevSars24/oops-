#include <iostream> 
using namespace std;

class parent {
public: 
void showparent() {

    cout << "i am parent!" << endl;
}
};


class child : public parent {
public:

void showchild() {
cout << "i am child" << endl;
}

};



int main() {

child obj;
obj.showparent();

obj.showchild();



    return 0;
}