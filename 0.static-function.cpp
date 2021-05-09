#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count;
int main(){
    Employee obj, obj1, obj2;
    obj.setData();
    obj.getData();
    Employee::getCount();
    obj1.setData();
    obj1.getData();
      Employee::getCount();
    obj2.setData();
    obj2.getData();
      Employee::getCount();
return 0;
    }