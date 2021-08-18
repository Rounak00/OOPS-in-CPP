#include<iostream>
using namespace std;

class cal{  //By default values are private
    int a,b;
    public:
       void setdata(int , int);
       void getdata();
};
void cal::getdata(){
    cout<<a<<"\n"<<b;
}
void cal::setdata(int x,int y){
             a=x;
             b=y;
       }
int main(){
    cal obj;
    obj.setdata(7,5);
    obj.getdata();
    return 0;
}

