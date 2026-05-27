#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec={2,4,7,9};

    // vector<int> vec(3,0); 
    //vec(size of the vector ,value that will be store)
    
    vector<char> vec={'a','b','c','d'};

    for(char i:vec){// it always print the values not index
        cout<<i<<endl;
    }

    return 0;
}