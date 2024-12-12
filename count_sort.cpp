#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void counts(int *arr, int n) {
    int max_ele = *max_element(arr, arr + n);
    vector<int> count(max_ele + 1, 0);
    
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int ind = 0;
    for (int j = 0; j <= max_ele; j++) {
        while (count[j] > 0) {
            arr[ind++] = j;
            count[j]--;
        }
    }
}

int main() {
    int arr[] = {5, 0, 2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    counts(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
