#include<iostream>
#include<string>
using namespace std;


class Arjun{

   string secret = "Secret Info";
   friend class Rudra;//FRIEND FUNCTION
   friend void revealSecret(Arjun &s);//FRIEND CLASS
};

class Rudra{// Rudra becomes friend of Arjun
public:
       void showSecret(Arjun &s){
           cout<<s.secret<<endl;
       }

};

void revealSecret(Arjun &s){
    cout<<s.secret<<endl;
}

int main(){
   Rudra r1;
   Arjun a1;
   r1.showSecret(a1);


    return 0;
}