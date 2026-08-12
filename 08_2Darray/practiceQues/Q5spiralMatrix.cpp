#include <iostream>
using namespace std;

void spiral_matrix(int matrix[][3], int r, int c)
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
    int matrix[4][3] = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}, {13, 14, 15}};
    int r = 4, c = 3;

    spiral_matrix(matrix, r, c);

}