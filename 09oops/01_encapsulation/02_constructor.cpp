#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;
    
public:
   //non-paramterized constructor//
   Car(){
    cout<<"Constructor with no parameters"<<endl;
   }

   //parameterized constructor//
   Car(string name, string color){
    cout<<"Constructor with parameters"<<endl;
    this->name=name;// "this->" pointer object ke properties bta ne ke liye hota hai, automatically create hojata hai
    this->color=color;
   }

   void start(){
    cout<<"Car start"<<endl;
   }

   void stop(){
    cout<<"Car stop"<<endl;
   }

   //GETTER
   string getname(){
     return name;
   }

   string getcolor(){
    return color;
   }
   

};

int main(){
    Car c0;//non-parameterized

    Car c1("Lamborghini 350 GT","White");//parameterized

    Car c2("Bugatti Chiron","Blue");
    
    return 0;
}