// lamda expressions also called anonymous functions
// it is nothing but make a quick function
//1. [] => capture list
//2. {} =>  function body
//3. () => parameter
//4. . , -> => return type [dot, arrow]
// sorting array
#include<iostream>
#include<algorithm>
using namespace std ;

int main()
{   
    int arr[] = {2, 4, -1, 8, -9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    sort(arr, arr + n, 
        [](int a, int b){return abs(a) < abs(b);});
    for(int i =0; i < n; i ++)
        cout << arr[i] << ' ';
    return 0 ;
}
