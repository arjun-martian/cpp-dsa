#include<iostream>
using namespace std;

int tilingthetiles(int width){// floor: 2*width
     if(width<=2) return width;

     return tilingthetiles(width-1)+tilingthetiles(width-2);
     //     vertically tile placed + horizontally tile placed

}

int main(){
    int len=2;
    cout<<"Lenght of the floor is "<<len<<endl;
    int width;
    cout<<"Enter the width of the floor:";
    cin>>width;

    cout<<tilingthetiles(width)<<endl;


    return 0;
}