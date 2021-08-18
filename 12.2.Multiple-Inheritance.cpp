
#include <iostream>
using  namespace std;

class a{
   public: 
  int x=10;
    
};
class b{
 public:
  int y=20;
  };
 class c:public b, public a{ 
     public:
      void get(){
          cout<<x<<" "<<y<<endl;
      } 
};
int main(){
    c obj;
    obj.get();
	    return 0;
}
