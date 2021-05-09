#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *P;
    P=&a;
    // *-Pointer, &-Refference
   cout<<a<<endl;
   cout<<&a<<endl;
   cout<<P<<endl;
   cout<<*P<<endl;
   
   
   int &Q=a;
   cout<<a<<endl;
   cout<<Q<<endl;
  Q=10;
  cout<<a<<endl;
   cout<<Q<<endl;
   a=20;
   cout<<a<<endl;
   cout<<Q<<endl;
   
   return 0;
}