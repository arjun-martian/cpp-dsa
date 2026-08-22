#include<iostream>
using namespace std;

void removeIthJthBit(int x,int n,int m){
     int bitmask=~(1<<n);
     x=(x&bitmask);
     
     bitmask=~(1<<m);
     cout<<(x&bitmask)<<endl;

}

int main(){
    int x=31;
    int i=1;
    int j=3;

    removeIthJthBit(x,i,j);

    return 0;
}