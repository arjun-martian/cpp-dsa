#include<iostream>
using namespace std;
int binTodec(int BinNum);
int main(){
    //MY METHOD
    // int binNum=101010;
    // int sum=0;
    // int c=1;
    // while(binNum>0){
    //     sum+=binNum%10*c;
    //     binNum/=10;
    //     c*=2;
    // }
    // cout<<sum<<endl;
    
    //MY METHOD-2 (USING FUNCTION)
    int binNum=1000111;
    cout<<binTodec(binNum)<<endl;

    return 0;
}

int binTodec(int BinNum){
      int sum=0,c=1;
    while(BinNum>0){
        sum+=BinNum%10*c;
        BinNum/=10;
        c*=2;
    }
    return sum;
}