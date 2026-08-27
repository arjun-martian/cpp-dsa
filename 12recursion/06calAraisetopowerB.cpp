#include<iostream>
using namespace std;

// MY METHOD
// int calAraisetopowerB(int a,int b){
//      if(b==0) return 1;
//      if(b==1) return a;
//      calAraisetopowerB(2*a,b-1);
// }

// TEACHER'S METHOD
// int calAraisetopowerB(int a,int b){
//     if(b==0) return 1;
//     return a*calAraisetopowerB(a,b-1);
// }

//TEACHER'S METHOD 2
int calAraisetopowerB(int a,int b){
    if(b==0) return 1;
    int x=calAraisetopowerB(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int b;
    cout<<"Enter power: ";
    cin>>b;

    cout<<calAraisetopowerB(a,b)<<endl;

    return 0;
}