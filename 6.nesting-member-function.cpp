#include<iostream>
using namespace std;

class l{
    int p;
    int fun(){
        p=p*p;
        return p;
    }
    public: 
    void insert(int a){
        p=a;
    }
    void display(){
        cout << fun(); // It is nesting function while some function call another function of class 
    }                   //(basically private function.)
};
int main(){
l obj;
obj.insert(2);
obj.display();
return 0;
}