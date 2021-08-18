#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

   
};
int Employee::count;

int main(){
    Employee obj, obj1, obj2;
    obj.setdata();
    obj.getdata();

    obj1.setdata();
    obj1.getdata();

    obj2.setdata();
    obj2.getdata();

cout<<Employee.count<<endl; // we can access static function or variables using class name

    return 0;

}