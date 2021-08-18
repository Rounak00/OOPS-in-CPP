
#include <iostream>
using  namespace std;



class t{
    int x;
    int y;
   public: 
    void setdata(int x, int y){
       this->x=x;
       this->y=y;
    }
    
};
int main(){
    t a;
    a.setdata(3,4);
	    return 0;
}
