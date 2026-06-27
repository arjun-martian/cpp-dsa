#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[8]={1,4,1,3,2,4,3,7};
    int n = sizeof(num)/sizeof(int);

    sort(num,num+n);
    
    for(int val:num){
        cout<<val<<endl;
    }
    return 0;

}