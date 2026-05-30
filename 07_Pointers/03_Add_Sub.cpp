#include <iostream>
using namespace std;
int main(){
    // int y = 7;
    int arr[5]={1,2,3,4,5};
    int *ptr = arr; // ye array ki first value ko point kr rha hai

    int *ptr2 = ptr+3;

    cout<<*ptr<<" "<<*ptr2<<endl;

    int diff = ptr2-ptr;
 // Do pointers ka substraction hume pointers ke beech kitna distance vo batata hai 
    
    cout<<diff<<endl;
}