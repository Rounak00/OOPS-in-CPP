
#include <iostream>
using  namespace std;

class a{
   public: 
  int x=10;
    
};
class b:public a{
 public:
   void get(){
          cout<<x<<endl;
      } 
  };
 class c:public a{ 
     public:
      void get(){
          cout<<x<<endl;
      } 
};
int main(){
    c obj;
    obj.get();
    b obj2;
    obj2.get();
	    return 0;
}
