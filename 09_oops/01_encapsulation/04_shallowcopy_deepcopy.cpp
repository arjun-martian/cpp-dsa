#include<iostream>
#include<string>
using namespace std;

class Car{
public:
   string name;
   string color;
   int *mileage;
   
   Car(string name, string color){
       this->name=name;
       this->color=color;
       mileage=new int;//DYNAMIC ALLOCATION
       *mileage=15;
   }   

//    Car(Car &original){
//     cout<<"copying the original constructor......."<<endl;

//     name=original.name;
//     color=original.color;
//     mileage=original.mileage;//SHALLOW COPY mein reference copy hota hai
//    }


  Car(Car &original){
    cout<<"copying the original constructor......."<<endl;

    name=original.name;
    color=original.color;
    mileage=new int;
    *mileage=*original.mileage;//DEEP COPY mein new memory address pe store hota hai
   }

};

int main(){
    Car c1("Lamborghini 350 GT","White");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;

    *c2.mileage=20;
    cout<<*c2.mileage<<endl;

    cout<<*c1.mileage<<endl;
    
    
    return 0;
}