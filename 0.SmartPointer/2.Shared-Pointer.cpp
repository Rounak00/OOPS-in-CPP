/*
0. shared_ptr is a smart pointer which can share the ownership of object (managed object).
1. Several shared_ptr can point to the same object (managed object).
2. It keep a reference count to maintain how many shared_ptr are pointing to the same object.
   and once last shared_ptr goes out of scope then the managed object gets deleted.
3. shared_ptr is threads safe and not thread safe. [what is this??]
   a. control block is thread safe
   b. managed object is not
4. There are three ways shared_ptr will destroyed managed object.
   a. If the last shared_ptr goes out of scope.
   b. If you initialize shared_ptr with some other shared_ptr.
   c. If you reset shared_ptr.
5. Reference count doesn't work when we use reference or pointer of shared_ptr.
*/

class foo{
    int x;
    public:
    explicit foo(x): x{x}{}
    int get(){return x;}
    ~foo(){}
};
int main(){
    // foo *f=new int(10);
    // cout<< f->get(); // but in that case destructor not call

    std::shared_ptr<foo>p(new foo(10)); // p here is object
    cout<<p->getx(); // here destructor call
    cout<< p.use_count()<<endl;// shows how many object use that data
}

// we can share like this in between line number 27-28 :-
std::shared_ptr<foo>p2=p; // now .use_count() print 2

// we can also do like this nut not work:-
std::shared_ptr<foo>*p2=&p; / std::shared_ptr<foo>&p2=p;

// except using unique_ptr we use like this:-
std::shared_ptr<foo>p2=make_shared<foo>(20); // use this bcz it is exception safe
// there are share threads also that is advance if need then watch CPP-Nuts channel
