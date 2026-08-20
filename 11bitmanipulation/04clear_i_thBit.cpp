#include<iostream>
using namespace std;

void getIthBit(int n,int indxBit){
    int bitMask=~(1<<indxBit);// 1 ko unti index pe left shift kr dega

    cout<<(n&bitMask)<<endl;

}

int main(){
    int n=7;
    int indxBit=2;

    getIthBit(n,indxBit);

    return 0;
}