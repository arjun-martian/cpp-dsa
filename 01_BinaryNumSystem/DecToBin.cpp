#include<iostream>
// #include<cmath>
using namespace std;
int decTobinary(int decNum);
int main(){
    //MY METHOD
    // int n=71;
    // int original=n;
    // int sum=0;
    // int j=0;
//     while(n!=0){
//        sum=(sum*10)+n%2;
//        n/=2;
//     }
    
//     while(sum!=0){
//         n=(n*10)+(sum%10);
//         sum/=10;
//     }
//     cout<<"Decimal number "<<original<<" into Binary number "<<n<<endl;
    //Teacher's Method
    for(int i=1;i<=10;i++){
        cout<<decTobinary(i)<<endl;
    } 
    return 0;
}

int decTobinary(int decNum){
    int sum=0,pow=1;
        while(decNum>0){
        sum+=decNum%2*pow;
        decNum/=2;
        pow*=10;
       }
       return sum;
}