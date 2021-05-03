#include<iostream>
using namespace std;

class cal{
    int a,b;
    public:
       void setdata(int x, int y){
           a=x;
           b=y;
       }
      void printdata(){
          cout<<a<<"\n"<<b;
      }
};
int main(){
    cal obj;
    obj.setdata(9,10); //it-is also called message passing;
    obj.printdata();
    return 0;
}