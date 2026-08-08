#include <iostream>
using namespace std;
int main(){
    int a = 6;
    int *ptr = &a;
    int b = 8;
    int *ptr2 = &b;

    cout<<ptr<<endl; //address of a
    // ptr++; // 4 bytes ka increment hoga kyuki int pointer pointer hai
    ptr+=3; // 3*int = 3*4 = 12 ka increment hoga 
    cout<<ptr<<endl;
    // ptr--;
    // cout<<ptr<<endl;
    
       
}
