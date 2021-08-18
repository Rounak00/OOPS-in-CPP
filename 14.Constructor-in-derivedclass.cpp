#include <iostream>
using  namespace std;

class a{
    int x;
   public: 
  a(int n){x=n; cout<<"a called"<<endl;}
  void printa(){cout<<x<<endl;}
    
};
class b {
    int y;
 public:
   b(int n){y=n; cout<<"b called"<<endl; }
   void printb(){cout<<y<<endl;}
  };
 class c:  public a, public b{
     int z; 
     public:
     c(int p,int q,int r):a(p),b(q){z=r; cout<<"c is called"<<endl;}
     void printc(){cout<<z<<endl;}
};


int main(){
    c obj(1,2,3);
    obj.printb();
    return 0;
}