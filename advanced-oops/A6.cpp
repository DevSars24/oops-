#include <iostream>
#include <string>

using namespace std;

class userprofile {
private:
  string name;
  int age;

  public:

     userprofile(const string& n, int a) : name(n), age(a) {

       if(a < 0) age = 0;
      cout << "profile created" << endl;

     }
   
   //getter method
     const string& getname() const {
    return name;
     }


   int getage() const {
    return age;
   }




//setter with validation 



void setage(int a){


if(a>= 0){

    cout << "a" << endl;
 
} else {

cout << "invalid age" << endl;

    }

  }
 
};


int main() {


  userprofile user("alice",25);
  cout << "name : " << user.getname() << " , age : " << user.getage() << endl;
  user.setage(-5);
  user.setage(30);

    return 0;
}