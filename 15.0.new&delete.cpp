#include <iostream>
using  namespace std;



int main(){
    int *p=new int(4);
    int *arr=new int[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<p<<endl;
    cout<<*p<<endl;
    delete p;
    delete []arr;
    return 0;
}