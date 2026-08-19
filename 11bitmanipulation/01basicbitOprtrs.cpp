#include<iostream>
using namespace std;
int main(){
    int x=3; //3 -->> 11
    int y=6; //6 -->> 110
    
    //BITWISE &(AND)
    // cout<<(x&y)<<endl; // 011 & 110 => 010 => 2

    //BITWISE |(OR)
    // cout<<(x|y)<<endl; // 011 | 110 => 111 => 7

     //BITWISE ^(XOR)
    // cout<<(x^y)<<endl; // 011 ^ 110 => 101=> 2

     //BITWISE ~(NOT)
    // cout<<(~x)<<endl; // ~ 00000011 => (-0000100) => (-4)

     //BITWISE <<(LEFT SHIFT)
     cout<<(7 << 2)<<endl; // 00000111 => 00011100 => 28 => 7*2^(2)

     //BITWISE >>(RIGHT SHIFT)
     cout<<(7 >> 2)<<endl; // 00000111 => 00000001 => 1 => 7/2^(2) => QUOTIENT
    

    return 0;
}