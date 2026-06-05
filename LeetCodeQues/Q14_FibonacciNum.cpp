#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int a = 0;
    int b = 1;
    int nextNum = 0;

    for(int i=1;i<n;i++){
        nextNum = a+b;
        a = b;
        b = nextNum;
    }
    if(n==1) cout<<n<<endl;
    else cout<<nextNum<<endl;

}