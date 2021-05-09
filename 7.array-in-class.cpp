#include<iostream>
using namespace std;

class shop{
int id[10];
int price[10];
int counter;
public:
void count(void){
    int counter=0;
}
void setprice(){
    cout<<"enter a ID"<<endl;
    cin>>id[counter];
    cout<<"Enter a price"<<endl;
     cin>>price[counter];
     counter++;
}
void getdata(){
    for(int i=0; i< counter; i++){
        cout<< "Product id :"<<id[counter]<<"Product price"<<price[counter]<<endl;
    }
}
};

int main(){
    shop obj;
    obj.count();
    obj.setprice();
     obj.setprice();
      obj.setprice();
      obj.getdata();

   shop obj2;
   obj2.count();  
    obj2.setprice();
    obj2.getdata(); 
}