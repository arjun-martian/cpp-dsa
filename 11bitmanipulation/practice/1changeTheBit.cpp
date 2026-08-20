#include<iostream>
using namespace std;

int changeTheBit(int x,int i,int val){
    int num=(x&~(1<<i));

    return (num|val<<i);

}

int main(){
    int x=7;
    int i=3;
    int val=1;

    cout<<changeTheBit(x,i,val)<<endl;

    return 0;
}