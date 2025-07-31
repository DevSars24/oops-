// we just hide the internal implementation here  -> abstraction  
#include <iostream> 
using namespace std;


class shape {
public:
virtual void draw() = 0;  //is she function pure virtual banti hain aur class abstract banti hain 
void commonfunction() {

cout << " common for all shapes " << endl;

  }

};



class circle : public shape {
public : 

void draw() override {

cout << "drawing circle" << endl;

}
};





int main() {

 circle c;
 c.draw();
 c.commonfunction();



    return 0;
}