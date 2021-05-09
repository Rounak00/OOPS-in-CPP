#include<iostream>
using namespace std;

int main(){
   int a[10]={1,2,3,4,5,6,7,8,9,0};
   
  int  *p=a;
   cout<<*p<<endl;
   cout<<*(p+1)<<endl;
   cout<<*(p+2)<<endl;
   return 0;
}