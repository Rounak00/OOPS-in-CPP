// similar to constructor but it destroy object after code exicution

// in destructure if there are multiple objects then last object delete first in that order it wors
#include <iostream>
using  namespace std;



class t{
   public: 
   t(){cout<<"Constructor called"<<endl;}
   ~t(){cout<< "Destructor called"<<endl; }
    
};
int main(){
    t a;
	    return 0;
}
