// Notes:-
/* 1> Smart pointer is a class which wraps a raw pointer , to manage the life time of the pointer.
   2> The most fundamental job of smart pointer is to remove the chances of memory leak.
   3> It makes sure that the object is deleted if it is not reference anymore. */

// Types:- 
/* 1> Unique_ptr: 
              allows only one owner of the underlying pointer.

   2> Shared_ptr:
              alloes multiple owners of the same pointer(reference count is maintained) 

   3> Weak_ptr:
             It is special type of pointer which doesn't cout the refference. 

   4> Auto_ptr:
            special" dangerous ability to be copied — which also unexpectedly transfers ownership.
            Not work as a frsher. bcz only in c++ 11 and deplicated in c++ 17 */

class Myint{
    public: 
    explicit Myint(int *p=nullptr){data=p} // its the constructor
    ~Myint(){delete data;}    // its the destructor 
    int& operator * () {return *data;} // operator overloading
    private: int *data; // the main value stored
};
int main(){
    int *p=new int(10);
    Myint myint=Myint(p); // make an object
    cout<<*myint<<endl;
    return 0;
} // in that scope and local variables are deleted so that destructor called

// in line 22 nullptr is nothing but a new keyword means replacement of null