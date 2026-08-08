#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    cout<<"Size of vector:"<<vec.size()<<endl;
    vec.push_back(46);// vector ki end me value insert kr deta hai 
    vec.push_back(34);
    vec.push_back(12);

    vec.pop_back();// vector ki end value of ko delete kr deta hai
    cout<<"Size of vector after push_back:"<<vec.size()<<endl;

    cout<<vec.front()<<endl;// print the first element
    cout<<vec.back()<<endl;// print the last element
    cout<<vec.at(1)<<endl;// particular index value

    return 0;
}    