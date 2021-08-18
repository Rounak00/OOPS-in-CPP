#include<iostream>
using namespace std;

class a{  // this class abstract base class
 public:
  virtual void display()= 0; // do nothing function or pure virtual function
};
class b: public a{
 public:
  void display(){
      cout<<"B called";
  }
};
class c: public b{
    public:
     void display(){
         cout<<"C called";
     }
};
int main(){
    a *ptr;
    b l;
    ptr=&l;
    ptr->display();
    return 0;
}
/*Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.


Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.*/