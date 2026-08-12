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
       mileage=new int;
       *mileage=15;
   }


  Car(Car &original){
    cout<<"copying the original constructor......."<<endl;

    name=original.name;
    color=original.color;
    mileage=new int;
    *mileage=*original.mileage;
  }

  ~Car(){
    cout<<"deleting the object....."<<endl;
    if(mileage!=NULL){
        delete mileage;
        mileage = NULL;
    }
  }

};

int main(){
    Car c1("Lamborghini 350 GT","White");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;

    Car c2=(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;

    
    return 0;
}