#include<iostream>
#include<string>
using namespace std;

class Student{
public:
   string name;
   float roll_no;

   void cgpa(){
    cout<<9.8<<endl;
   }

};

int main(){
    Student s1;
    s1.name="Arjun";
    cout<<s1.name<<endl;
    s1.roll_no=350401;
    cout<<s1.roll_no<<endl;
    s1.cgpa();

    return 0;
}