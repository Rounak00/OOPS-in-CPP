/*
0. unique_ptr is a class template.
1. unique_ptr is one of the smart pointer provided by c++11 to prevent memory leaks.
2. unique_ptr wraps a raw pointer in it, and de-allocates the raw pointer,
   when unique_ptr object goes out of scope.
3. similar to actual pointers we can use arrow and * on the object of unique_ptr,  because it is overloaded in unique_ptr class.
4. When exception comes then also it will de-allocate the memory hence no memory leak.
5. Not only object we can create array of objects of unique_ptr.


opertion: // operations / functions are very advance so no need
 release, reet, swap, get, get_deleter 
 // these are advance if need then watch CPP-Nuts channel
*/

class foo{
    int x;
    public:
    explicit foo(x): x{x}{}
    int get(){return x}
    ~foo(){}
};
int main(){
    // foo *f=new int(10);
    // cout<< f->get(); // but in that case destructor not call

    std::unique_ptr<foo>p(new foo(10)); // p here is object
    cout<<p->getx(); // here destructor call
}

// except using unique_ptr we use like this:-
std::unique_ptr<foo>p2=make_unique<foo>(20); // use this bcz it is exception safe