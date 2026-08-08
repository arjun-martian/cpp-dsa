#include<iostream>
using namespace std;

void printUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate==false) {
            cout << arr[i] << " ";
        }
    }
    cout<<endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, n);
    return 0;
}