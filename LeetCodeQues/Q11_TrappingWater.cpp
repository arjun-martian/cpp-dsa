#include<iostream>
#include<climits>
using namespace std;

void waterTrapped(int *height,int size){
    int left_Max[20000];
    left_Max[0] = height[0];

    for(int i=1;i<size;i++){
        left_Max[i] = max(left_Max[i-1],height[i-1]);
    }

    int right_Max  [20000];
    right_Max[size-1] = height[size-1];

    for(int i=size-2;i>=0;i--){
        right_Max[i] = max(right_Max[i+1],height[i+1]);
    }
    
}

int main(){
    int height[7] = {4,2,0,6,3,2,5};
    int size = sizeof(height)/sizeof(int);

   waterTrapped(height,size);
           
}