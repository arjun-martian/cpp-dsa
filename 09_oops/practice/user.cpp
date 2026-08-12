#include<iostream>
using namespace std;


class User{
   string id;
   string password;

public:
    User(string id){
     this->id=id;
    }   

    string username="arjun@martian";


    //SETTER
    void setpassword(string password){
        this->password=password;
    }

    //GETTER
    string getid(){
        return id;
    }

    string getpassword(){
        return password;
    }


};

int main(){
    User u1("*arjmartian");
    cout<<"USERNAME: "<<u1.username<<endl;
    cout<<"ID: "<<u1.getid()<<endl;
    u1.setpassword("#$*5k^_j");
    cout<<"SUGGESTED PASSWORD: "<<u1.getpassword();

    return 0;
}