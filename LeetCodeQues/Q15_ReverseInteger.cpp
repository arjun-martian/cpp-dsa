#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x = -123;
    int rvrs = 0;

    while(x!=0){
        rvrs*=10;
        rvrs+=x%10;
        x/=10;
    }
    if(rvrs>(pow(2,31)-1) || rvrs<(pow(-2,31))) cout<<0<<endl;
    else cout<<rvrs<<endl;

}