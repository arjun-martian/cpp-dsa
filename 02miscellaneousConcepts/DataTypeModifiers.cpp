#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(short)<<endl;
    cout<<sizeof(long long)<<endl;
    
    //signed int --->> both positive and negative
    //unsigned int -->> only positive
    unsigned int x = -9;
    cout<<x<<endl;
    
    return 0;
}