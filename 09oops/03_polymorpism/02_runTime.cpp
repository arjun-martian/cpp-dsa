#include<iostream>
#include<string>
using namespace std;

// FUNCTION OVERRIDING(Same name funtions ko redefine krna)
// class Teacher{
// public:
//     string id="T79340ejnj";
//     void name(){
//         cout<<"Mr.Devendra"<<endl;
//     }  
// };

// class Student:public Teacher{
// public:
//     string id="34456@#yu";
//     void name(){
//         cout<<"Mr.Arjun"<<endl;
//     }

// };

class Parent{
public:
    void show(){
        cout<<"Parents"<<endl;
    }

    virtual void hello(){
         cout<<"Parent says hello...."<<endl;
    }
};

class Child:public Parent{
public:
    void show(){
        cout<<"Child"<<endl;
    }

    void hello(){
        cout<<"Child says hello...."<<endl;
    }
};

int main(){
    Child child1;
    Parent *ptr;

    ptr=&child1;//RUN TIME BINDING
    ptr->hello();//VIRTUAL FUNCTION

    return 0;
}