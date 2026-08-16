#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char word[], int n){
    // for(int strt=0,end=n-1;strt<n/2;strt++,end--){
    //     char temp=word[strt];
    //     word[strt]=word[end];
    //     word[end]=temp;
    // }
    
    int strt=0;
    int end=n-1;

    while(strt<end){
        swap(word[strt++],word[end--]);
    }
    
}

int main(){
    char word[6]={'h','e','l','l','o','\0'};
    
    reverseString(word,strlen(word));

    cout<<word<<endl;
    return 0;
}