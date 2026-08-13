#include<iostream>
#include<string>
using namespace std;

//ABSRTACT CLASS
class Flower{
public:
   virtual void color()=0;/*ABSTRACT FUNCTION or PURE VIRTUAL FUNCTION
   (aisa virtual function jiska koi logic or definition nhi hota)*/
};

class Purple:public Flower{
public:
    void color(){
        cout<<"Bring Purple Colored Flower"<<endl;
    }
};

class Yellow:public Flower{
public:
    void color(){
        cout<<"Bring Yellow Colored Flower"<<endl;
    }
};

int main(){
    Purple p1;
    p1.color();

    Yellow y1;
    y1.color();

    // It will given an error
    // Flower f1;
    // f1.color();

    return 0;
}