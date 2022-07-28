//1. 
#include<iostream>
using namespace std ;

void fun()
{
    cout << "GFG \n";
}
int main()
{
    // void (*fun_ptr)() = &fun;
    // void (*fun_ptr)() = fun;
    auto fun_ptr = fun;
    fun_ptr();
    // (*fun_ptr)();
    return 0 ;
}

//2.


int fun0(int x, int y)
{
    return (x+y);
}
int main()
{
    auto fun_ptr = fun0;
    // here auto is int (*fun_ptr) (int, int)
    cout << fun_ptr(10, 20);
    return 0 ;
}


//Another Example
void f(int a){
    cout<<a;
}
int main() {
 void (*p)(int)=&f;  // we can do this also p=f;
    p(5);
}