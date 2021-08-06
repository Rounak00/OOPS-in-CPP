/*
0. If we say unique_ptr is for unique ownership and shared_ptr is for shared ownership then
   weak_ptr is for non-ownership smart pointer.
1. It actually reference to an object which is managed by shared_ptr.
2. A weak_ptr is created as a copy of shared_ptr.
3. We have to convert weak_ptr to shared_ptr in order to use the managed object.
4. It is used to remove cyclic dependency between shared_ptr.
*/

int main(){
    auto shrptr= std::make_shared<int>(100);
    std::weak_ptr<int>weakptr(sgrptr); // weakPtr make by shareptr

     cout<< weakptr.use_count()<<endl; // print 1
     cout<< shrptr.use_count()<<endl; // print 1
     cout<< weakptr.expired()<<endl; // print false

}
//// there are many more advance if need then watch CPP-Nuts channel