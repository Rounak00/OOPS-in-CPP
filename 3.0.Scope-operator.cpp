#include<iostream>
using namespace std;

int x=10;
int main(){
    int x=20;
    cout<<x<<endl;
    cout<<::x<<endl; // It access the global variable
    return 0;
}