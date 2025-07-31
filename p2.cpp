#include <iostream>

using namespace std;

class capsule {
private:
int data;

public:

//getter 
int getdata() {
return data;
}


//setter
void setdata(int value){
    data = value;
  }
};

int main() {


capsule obj;
obj.setdata(42);
cout << "data: " << obj.getdata() << endl;



    return 0;
}