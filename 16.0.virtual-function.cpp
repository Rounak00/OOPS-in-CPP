#include <iostream>
using  namespace std;

class base{
    public : 
    virtual void print (){cout<<"base class";}
};
class derived:public base{
 public:
  void print(){cout<<"Derived";} // we can also write this way void print()override{cout<<"Derived";}
};


int main(){
    derived obj;
  base *p;
  p=&obj;
  p->print();
    return 0;
}
// here it is also knon as function overriding which is happen in runtime polymorphism
// if we dont use virtual key word then pointer's class's print will exicuted thats why we use virtual key word; 


//Virtual constructor not possible
// Virtual Destructor
class base{
  public:
    base(){cout<<"base const \n";}
    virtual ~base(){cout<<"base dest \n";}
};
class derived:public base{
    public:
      derived(){cout<<"derived const \n";}
    ~derived(){cout<<"derived dest \n";}
};



int main() {
   base *b=new base();
   base *d=new derived(); 
    
   delete b;
   delete d; 
}
 /* output:
 
 base const 
base const 
derived const 
base dest 
derived dest 
base dest 
 */

/*
if dont use virtual keyword
*/