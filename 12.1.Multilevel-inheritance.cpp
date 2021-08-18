
#include <iostream>
using  namespace std;

class a{
   public: 
  int x=10;
    
};
class b:public a{
 public:
  int y=20;
  };
 class c:public b{ 
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
