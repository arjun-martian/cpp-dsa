#include<iostream>
using namespace std;

// MY METHOD(HINT: TRY TO THINK QUESTION IN REVERSE)
// int maze(int n,int m){
//    if(n==1 || m==1) return 1;
//    return maze(n-1,m)+maze(n,m-1);

// }

// TEACHER'S+MY METHOD
int maze(int er,int ec,int cr,int cc){
   if(cr==er) return 1;
   if(cc==ec) return 1;

   return maze(er,ec,cr+1,cc)+maze(er,ec,cr,cc+1);
}

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ROWS: ";
    cin>>n;

    int m;
    cout<<"ENTER THE NUMBER OF COLUMNS: ";
    cin>>m;

    // int w=maze(n,m);
    int w=maze(n,m,1,1);
    cout<<"NUMBER OF WAYS TO EXIT ARE "<<w<<endl;

    return 0;
}