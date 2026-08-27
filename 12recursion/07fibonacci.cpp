#include<iostream>
using namespace std;

int fibonacii(int n){
    if(n<=2) return 1;
    int a=fibonacii(n-1);
    int b=fibonacii(n-2);
    int sum=a+b;
    return sum;

}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<fibonacii(n)<<endl;

    return 0;
}