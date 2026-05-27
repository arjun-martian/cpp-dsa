#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num;

    num.push_back(5);
    num.push_back(3);
    num.push_back(10);
    num.push_back(7);
    num.push_back(12);

    cout<<num.size()<<endl;
    cout<<num.capacity()<<endl;    

    return 0;
}