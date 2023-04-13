// Create Thread & Wait For Thread
#include<iostream>
#include<thread>
using namespace std;

void fn(int val){
  cout<<"The Value="<<" "<<val<<endl;
}

int main(){
  int l=100;
  thread t1 {fn,ref(l)};
  thread t2 {fn,l};
  
  t1.join();
  t2.join();
return 0;
}
