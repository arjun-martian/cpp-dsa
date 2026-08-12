#include<iostream>
#include<string>
using namespace std;

class Car{
public:
   string name;
   string color;
   
   Car(string name, string color){
       this->name=name;
       this->color=color;
   }   

   Car(Car &original){
    cout<<"copying the original constructor......."<<endl;

    name=original.name;
    color=original.color;
   }

};

int main(){
    Car c1("Lamborghini 350 GT","White");

    // Car c2(c1);//default Copy Constructor(if not created by ourself)
    Car c2(c1);//Custom Copy Constructor
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    
    return 0;
}