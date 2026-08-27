#include<iostream>
using namespace std;

bool ispoweroftwo(long long n){
    if(n<=0) cout<<false<<endl;
    if(n%2==0 || n==1){
        if(n==1) cout<<true<<endl;
        return ispoweroftwo(n);
    }
    cout<<false<<endl;

}

int main(){
    long long n;
    cout<<"ENTER THE NUMBER TO CHECK IF IT IS A POWER OF TWO: ";
    cin>>n;

    ispoweroftwo(n);

    return 0;
}