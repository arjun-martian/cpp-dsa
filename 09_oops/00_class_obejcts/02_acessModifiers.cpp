#include<iostream>
#include<string>
using namespace std;

class Student{
     
   string name;//agar me private keyword ka use na karu tabhi properties or methods private hi rahegye

public:
   float average;

   void getpercentage(){
    cout<<average*100<<"%\n";
   }
};

int main(){
    
    Student s1;

    s1.average = 0.90;
    cout<<s1.average<<endl;
    s1.getpercentage();

    // s1.name = "Arjun";
    // cout<<name<<endl;

    return 0;
}