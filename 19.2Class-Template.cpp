#include<iostream>
using namespace std;

template <typename T>
struct Pair{                // didn't use class here only for reduce the code
    T x, y;
    Pair(T i, T j){x = i; y = j;}
    T getFirst(){return x;}
    T getSecond(){return y;}
};// if we write functions ouside of class you can write it like this
// Pair<T>::getSecond(){}   //just like this

int main()
{
    Pair <int> p1(10, 20);
    cout << p1.getFirst() << " " << p1.getSecond();
    return 0;
}