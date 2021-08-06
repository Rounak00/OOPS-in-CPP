#include<iostream>
using namespace std;

int main(){
   int a[10]={1,2,3,4,5,6,7,8,9,0};
   
  int  *p=a;
  int *q= &a[3];
   cout<<*p<<endl;
   cout<<*(p+1)<<endl;
   cout<<*(p+2)<<endl;
   return 0;
}
/* if:-
     a> *++p >> 1 index as print, thats mean print 2
     b>  ++*p>> 0index ++ increament tahts mean print 2
     c> *p++ >> read data then move poiter to index 1 , thats mean print 2 
     d> (*p)++>> 0 index ++ increament that data , thats mean print 2*/ 


// if we do q-p = 2 [that means how many variables are there before higest one or q]
// we can only subtract two pointers not add,multiply or devide