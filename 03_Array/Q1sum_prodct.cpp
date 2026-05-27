#include<iostream>
using namespace std;
int main(){
    int num[]={34,67,89,23,12};
    int sz=sizeof(num)/sizeof(int);
    int i=0;
    int sum=0;
    int prodct=1;
    while(sz-1>=0){
         sum+=num[i];
         prodct*=num[i];
         i++;
         sz--;
    }
    cout<<"Sum:"<<sum<<endl<<"Product:"<<prodct<<endl;

    return 0;
}