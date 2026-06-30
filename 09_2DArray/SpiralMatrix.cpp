#include <iostream>
using namespace std;

void spiral_matrix(int matrix[][4], int r, int c)
{
    int strtR = 0, strtC = 0, endR = r - 1, endC = c - 1;

    while (strtR <= endR && strtC <= endR)
    {
        // top
        for (int j = strtC; j <= endC; j++){
            cout << matrix[strtR][j] <<" ";
        }

        // left
        for (int i = strtR + 1; i <= endR; i++){
            cout << matrix[i][endC] <<" ";
        }

        // bottom
        for (int j = endC - 1; j >= strtC; j--){
            if(strtR==endR){
                break;
            }
            cout << matrix[endR][j] <<" ";
        }

        // right
        for (int i = endR - 1; i >= strtR + 1; i--){
            if(strtC==endC){
                break;
            }
            cout << matrix[i][strtC] <<" ";
        }

        strtR++;
        strtC++;
        endR--;
        endC--;
    }
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int r = 4, c = 3;

    spiral_matrix(matrix, r, c);

    // int temp = 0,temp2 = 0;
    // for(int i=0;i<r;i++){
    //     int temp = 0;
    //     int temp2 = i;
    //     for(int j=0;j<c;j++){
    //         cout<<matrix[i][j]<<" ";
    //         if(i==0 && j==c-1){
    //             temp = i+1;
    //             temp2 = j;
    //             while(temp<=r-1 && temp2==c-1){
    //                 cout<<matrix[temp][temp2]<<" ";
    //                 temp++;
    //             }
    //         }
    //     }
    //     break;
    // }

    // for(int i=r-1;i>=0;i--){
    //     for(int j=c-1;j>0;j--){
    //         cout<<matrix[i][j-1]<<" ";
    //     }
    //     break;
    // }

    // for(int j=0;j<c-1;j++){
    //     for(int i=r-1;i>1;i--){
    //         cout<<matrix[i-1][j]<<" ";
    //     }
    //     break;
    // }

    // temp=0,temp2=0;
    // if(r%2==0 && c%2==0){
    //  for(int i=1;i<2;i++){
    //      temp=i;
    //      for(int j=1;j<=2;j++){
    //          cout<<matrix[i][j]<<" ";
    //          if(i==1 && j==2){
    //              temp2=j;
    //              temp+=1;
    //              while(temp2>0){
    //                  cout<<matrix[temp][temp2]<<" ";
    //                  temp2--;
    //              }
    //          }
    //      }
    //      break;
    //  }
    // }else if(r%2!=0 && c%2!=0){
    //     for(int i=1;i<2;i++){
    //       temp=i;
    //       for(int j=1;j<2;j++){
    //         cout<<matrix[i][j]<<" ";
    //       }
    //      break;
    //     }
    // }else if(r%2!=0 && c%2==0){
    //     for(int i=1;i<2;i++){
    //       temp=i;
    //       for(int j=1;j<=2;j++){
    //         cout<<matrix[i][j]<<" ";
    //       }
    //      break;
    //     }
    // }else{
    //     for(int i=1;i<2;i++){
    //       temp=i;
    //       for(int j=1;j<2;j++){
    //         cout<<matrix[i][j]<<" ";
    //       }
    //      break;
    //     }
    // }
}