#include<iostream>
#include<exception>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b=0){throw "You cant divide with zero"}

        int c=a/b;
        cout<<c;
    }catch(const string S){
        cout<<"Exception occured "<<S;
    }



    return 0;
}