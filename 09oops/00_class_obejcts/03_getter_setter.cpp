#include<iostream>
#include<string>
using namespace std;

class Student{
     
   string name;
   float marks;

public:
    
    //SETTER
    void setname(string nameVal){
        name=nameVal;
    }

    void setmarks(float marksVal){
        marks=marksVal;
    }

    //GETTER
    string getname(){
        return name;
    }

    float getmarks(){
        return marks;
    }
   
};

int main(){
    Student s1;
    s1.setname("Arjun");
    s1.setmarks(100);

    cout<<s1.getname()<<endl;
    cout<<s1.getmarks()<<endl;

    return 0;
}