#include<iostream>
using namespace std;
int main(){
    int x=3; //3 -->> 11
    int y=6; //6 -->> 110
    
    // cout<<(x&y)<<endl; //Bitwise &(AND)
    // cout<<(x|y)<<endl; //Bitwise |(OR)
    //  cout<<(x^y)<<endl; //Bitwise ^(XOR)
    // cout<<(x<<1)<<endl; //Bitwise <<(LEFT SHIFT OPRT)
    cout<<(y>>2)<<endl; //Bitwise >>(RIGHT SHIFT OPRT)

    return 0;
}