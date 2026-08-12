#include<iostream>
#include<string>
using namespace std;

// class Animal{
// public:
//     int legs;
//     void sound(){
//         cout<<"Make sounds"<<endl;
//     }

//     void breathe(){
//         cout<<"Breathes...."<<endl;
//     }

// };

// //Single-Level Inheritance
// class Mammal:public Animal{
// public:   
//     string BloodType; 

//     Mammal(){
//       BloodType="Warm";
//     }
// };

// //Multi-Level Inheritance
// class Hippopotamous:public Mammal{
// public:
//     void swim(){
//         cout<<"Hippo Swims"<<endl;
//     }
// };

// class Teacher{
// public:
//     int salary;
//     string subject;
// };

// class Student{
// public:
//     int roll_no;
//     float cgpa;
// };

// //Multiple Inheritance
// class TeacherAssistant:public Student, public Teacher{
// public:
//       string name;
       
//        void bloodgroup(){
//         cout<<"B+"<<endl;
//        }
// };

//Hierarchical Inheritance
class Animal{
public:

    void sound(){
        cout<<"Make sounds"<<endl;
    }

    void eat(){
        cout<<"They eat"<<endl;
    }

    void breathe(){
        cout<<"Breathes...."<<endl;
    }

};

//Hybrid Inheritance(Combination of different types of Inheritance)
class Mammal:public Animal{
public:   
    
    void givebirth(){
       cout<<"They gives direct birth"<<endl;
       cout<<endl;
    }

};

class Reptile:public Animal{
public:

    void layegg(){
        cout<<"They lay eggs"<<endl;
    }

};

class Snake:public Reptile{
public: 
    void example(){
        cout<<"Sanke is an example of reptile"<<endl;
    } 

};

int main(){
    Mammal m1;
    cout<<"MAMMAL :"<<endl;
    m1.breathe();
    m1.eat();
    m1.sound();
    m1.givebirth();
    
    Reptile r1;
    cout<<"REPTILE :"<<endl;
    r1.breathe();
    r1.eat();
    r1.sound();
    r1.layegg();

    Snake s1;
    s1.example();

    return 0;
}