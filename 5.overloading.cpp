#include<iostream>
using namespace std;

class over{
public:
  void a(int p, int q, int r){
      cout<<p+q+r<<endl;
  }
  void a(int p, int q){
      cout<<p+q<<endl;
  }
};
int main(){
    over obj;
    obj.a(1,2);
    obj.a(1,2,3);
return 0;
}