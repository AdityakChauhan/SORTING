#include <iostream>
using namespace std;

void bubble(int *a, int n) {
    for(int i=n-1;i>-1;i--) {
        bool flag = 0;
        for(int j=0;j<=i-1;j++) {
            if(a[j]>=a[j+1]) {
                flag = 1;
                swap(a[j],a[j+1]);
            }
        }
        if(!flag)   return;
    }
}

int main() {
    int a[] = {5,4,2,1,3};
    bubble(a);
    for(auto i:a) {
        cout<<i<<" ";
    }

    return 0;
}
