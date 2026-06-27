#include<iostream>
#include<climits>
using namespace std;

void counting_sorting(int num[],int n);
void print(int num[],int n);

int main(){
    int num[8]={1,4,1,3,2,4,3,7};
    int n = sizeof(num)/sizeof(int);
    
    counting_sorting(num,n);
}

void print(int num[],int n){
    for(int i=0;i<n;i++){
        cout<<num[i]<<endl;
    }
}

void counting_sorting(int num[],int n){
     int freq[10000]={0}; // range
     int maxNum = INT_MIN, minNum =INT_MAX;

    //  for(int i=0;i<n;i++){
    //     maxNum = max(num[i],maxNum);
    //     minNum = min(num[i],minNum);
    //  }

     // 1st step --> O(n)
     for(int i=0;i<n;i++){
         freq[num[i]]++;
         maxNum = max(num[i],maxNum);
         minNum = min(num[i],minNum);
     }
     
     // 2nd step --> O(range) = maxNum -minNum
     for(int i=minNum,j=0;i<maxNum;i++){
        while(freq[i]>0){
            num[j] = i;
            freq[i]--;
            j++;
        }
     }

   print(num,n);
}
