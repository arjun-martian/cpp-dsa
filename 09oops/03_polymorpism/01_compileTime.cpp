#include<iostream>
#include<string>
using namespace std;

// class Student{
// public:
//     //FUNCTION OVERLOADING(Same name ke function but different behaviour)
//       void show(string name){
//         cout<<"Name: "<<name<<endl;
//       }

//       void show(int roll_no){
//         cout<<"Roll NO: "<<roll_no<<endl;
//       }

// };

class ComplexNum{
    int real;
    int img;
public:
    ComplexNum(int real,int img){
        this->real=real;
        this->img=img;
    }
      
    void result(){
    cout<<real<<" + "<<img<<"i"<<endl;
    }
    
    //OPERATOR OVERLOADING(Defining another meaning of that operator)
    ComplexNum operator +(ComplexNum &cn2){
        int resReal=this->real + cn2.real;
        int resImg=this->img + cn2.img;
        ComplexNum cn3(resReal,resImg);
        cout<<"RESULT = ";
        return cn3;
    }

    ComplexNum operator *(ComplexNum &cn2){
        int resReal=this->real * cn2.real;
        int resImg=this->img * cn2.img;
        ComplexNum cn4(resReal,resImg);
        cout<<"RESULT = ";
        return cn4;
    }

    ComplexNum operator -(ComplexNum &cn2){
        int resReal=this->real - cn2.real;
        int resImg=this->img - cn2.img;
        ComplexNum cn5(resReal,resImg);
        cout<<"RESULT = ";
        return cn5;
    }
      

};

int main(){
    ComplexNum cn1(22,2);
    ComplexNum cn2(13,1);
    
    cn1.result();
    cn2.result();
   
   ComplexNum cn3(cn1+cn2);
   cn3.result();

   ComplexNum cn4(cn1*cn2);
   cn4.result();

   ComplexNum cn5(cn1-cn2);
   cn5.result();

    return 0;
}