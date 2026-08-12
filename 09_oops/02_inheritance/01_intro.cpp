#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    string color;
    void sound(){
        cout<<"Make sounds"<<endl;
    }

    void breathe(){
        cout<<"Breathes...."<<endl;
    }

};

class Fish:public Animal{
public:    
     int fins;

     void swims(){
        cout<<"Fish swims"<<endl;
     }
};

int main(){
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swims();
    
    f1.sound();
    f1.breathe();

    return 0;
}