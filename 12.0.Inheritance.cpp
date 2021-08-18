
/*
Access specifier:- 
    Derived-->   Public         private                 protect
    members |       |              |                       |
    public---->  public         private                 protec
    private--->  not inherit    not inherit             not inherit
    protect----> protect      private                 protect
*/


#include <iostream>
using  namespace std;

class a{
   public: 
  int a=10;
    
};
class b:public a{   // simple inheritance we just need to take care of accss specifier
 public:
  void get(){
     cout<<a;
  }
};
int main(){
    b obj;
    obj.get();
	    return 0;
}
