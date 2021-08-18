#include <iostream>
using  namespace std;

class a{
   public: 
  int x=10;
    
};
class b:virtual public a{
 public:
   int y=20;
  };
 class c: virtual public a{ 
     public:
    int z=30; 
};
class d:public b, public c{
    public:
       void get(){
         cout<<x<<endl<<y<<endl<<z<<endl;
       }
};

int main(){
    d obj;
    obj.get();
    return 0;
}