#include<iostream>
#include<string>
using namespace std;

class Student{
   //PROPERTIES
   string name;
   float average;

   //METHODS
   void getpercentage(){
    cout<<average*100<<endl;
   }
};

class User{
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"deleting acount"<<endl;
    }

    void editbio(string newBio){
        bio=newBio;
    }
};

int main(){
    //OBEJCT
    Student s1;
    cout<<sizeof(s1)<<endl;

    return 0;
}