#include<iostream>
using namespace std;

int changeTheBit(int x,int n){
//     int num=x;
//     for(int i=0;i<n;i++){
//         num=(num&~(1<<i));
//     }
//    return num;

      int bitmask = (~0)<<n;
      return x&bitmask;


}

int main(){
    int x=15;
    int i=2;

    cout<<changeTheBit(x,i)<<endl;

    return 0;
}