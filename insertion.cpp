#include <iostream>
using namespace std;

void ins(int *arr, int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int a[] = {5, 4, 1, 2, 3};
    ins(a, 5);
    
    for(int i : a) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
