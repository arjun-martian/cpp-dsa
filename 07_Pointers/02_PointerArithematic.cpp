#include <iostream>
using namespace std;
int main(){
    int b=6;
    int *ptr = &b;

    cout<<ptr<<endl; //address of b
    ptr++; // 4 bytes ka increment hoga kyuki int pointer pointer hai 
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;

}
