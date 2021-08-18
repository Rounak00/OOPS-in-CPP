/*
copy constructor meaans assume we have a Class T and 1 obj name a and another object name b so we can simply right this: T a(10); T b(a);

but we can not do this: T a(10); T b=a;
*/
#include <iostream>
using  namespace std;



class t{
   public: int *p;
    t (int x){
        p=new int (x);
    }
    void let(int x){
        *p=x;
    }
    void get(){
        cout<<*p;
    }
};
int main(){
    t a(10);
    t b(a);
    b.get();
    b.let(30);
    a.get();
    b.get();
	    return 0;
}
// here it is shallow copy where if we change value of b , a's value also changed