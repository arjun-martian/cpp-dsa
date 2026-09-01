#include<iostream>
using namespace std;

int friendspairing(int n){
     if(n<=2) return n;

     return friendspairing(n-1)+friendspairing(n-1)*friendspairing(n-2);

}

int main(){
    friendspairing(5);

    return 0;
}