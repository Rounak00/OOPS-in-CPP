#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// we can do like this also
#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};

      
    for(int i: a){              // it is call for range loop
        cout<<i<<" ";
    }
    return 0;
}


// now see for each loop
//under algorithm header file, and never use in normal array only use in vector
for_each(vec.begin(), vec.end(), [](int i){
  cout<<i<<" ";
});

