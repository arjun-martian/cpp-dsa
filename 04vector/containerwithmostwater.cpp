#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int mostlyfilledcontainer(vector<int>& height, int s){
    
   int n=height.size();
       int left=0;
       int right=n-1;
       int maxWater=0;

       while(left<right){

         int width=right-left;
         int h=min(height[left],height[right]);
         int area=width*h;
         maxWater=max(area,maxWater);
         (height[left]<height[right])?left++:right--;

       }

       return maxWater;
       

}

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};

    cout<<"MAX WATER CONTAINS: "<<mostlyfilledcontainer(height,height.size())<<endl;


    return 0;
}