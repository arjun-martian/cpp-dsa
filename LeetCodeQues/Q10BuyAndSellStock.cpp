#include<iostream>
#include<climits>
using namespace std;

void maxProfit(int *price,int size){

    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    for(int i=1;i<size;i++){
        bestBuy[i] = min(bestBuy[i-1],price[i-1]);
    }

    int maxProfit = 0;

    for(int i=0;i<size;i++){
        int currProfit = price[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    cout << maxProfit << endl;

    
}

int main(){
    int price[6] = {7,1,5,3,6,4};
    int size = sizeof(price)/sizeof(int);

    maxProfit(price,size);
           
}