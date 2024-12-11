#include <iostream>
using namespace std;

void select(int *a, int n) {
    for(int i=0;i<n;i++) {
        int ind  = i;
        for(int j=i;j<n;j++) {
            if(a[j]<=a[ind]) {
                ind=j; 
            }
        }
        swap(a[ind], a[i]);
    }
}

int main() {
    int a[] = {5,4,2,1,3};
    select(a,5);
    for(auto i:a) {
        cout<<i<<" ";
    }

    return 0;
}
