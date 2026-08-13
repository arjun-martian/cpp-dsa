#include<iostream>
#include<string>
using namespace std;

// void count(){
//     static int count=0;/*STATIC VARIABLE
//     ye lifetime ke liye memory me exist krte hai and previous vakue ko update krte hai*/
//     count++;
//     cout<<count<<endl;
// }

class Egg{
public:
   Egg(){
    cout<<"constructor......."<<endl;
   }

   ~Egg(){
    cout<<"destructor........"<<endl;
   }

};

int main(){
   int a=0;
   if(a==0){
    static Egg e1;//STATIC OBJECT : ye memory se delete ho jata code end hone se phele
   }

   cout<<"code ending........."<<endl;
    return 0;
}