#include <iostream>
using  namespace std;



class para{
    private: 
     int x;
     int y;
    public:
      para(int a, int b):x(a),y(b){ // intializer list
          cout<<x+y;
      }
};
int main(){
    para x(2,3);
    return 0;
}
