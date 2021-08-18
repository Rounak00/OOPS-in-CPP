#include <iostream>
using  namespace std;

class hello{
    public: hello(){    // this is default constructor
        cout<<"hello";
    }
};

class para{
    public:
      para(int a, int b){  // this is parametarize constructor
          cout<<a+b;
      }
};
class call{
    int a, b;
    public: call(int x, int y){
        a=x;
        b=y;
    }

};
int main(){
    hello h;
    para x(2,3); // this is implicit calling
    call a=call(4,6);// /explicit calling
    return 0;
}
