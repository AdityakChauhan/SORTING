#include <bits/stdc++.h>
using namespace std;

int count = 0;

void merge(int a[], int s, int mid, int e) {
    int n1 = mid+1-s;
    int n2 = e-mid;

    int a1[n1], a2[n2];
    for(int o=0;o<n1;o++) {
        a1[o]  = a[s+o];
    }
    for(int o=0;o<n2;o++) {
        a2[o]  = a[mid+1+o];
    }
    int ind = s;
    int i=0, j=0;
    while(i<n1 && j<n2) {
        if(a1[i]<=a2[j]) {
            a[ind++]=a1[i++];
        }
        else {
            a[ind++]=a2[j++];
            count += n1-i;
        }
    } 
    while(i<n1) {
        a[ind++]=a1[i++];
    }  
    while(j<n2) {
        a[ind++]=a2[j++];
    }  
}

void mergeSort(int a[], int s, int e) {
    if(s<e) {
        int mid = (s+e)/2;
        mergeSort(a,s,mid);
        mergeSort(a,mid+1,e);
        merge(a,s,mid,e);
    }
}

int main()  {
    int a[] = {5,1,4,3,2};
    mergeSort(a,0,4);
    for(int i:a) {
        cout<<i<<" ";
    }
    cout<<"\ninversions: "<<count<<endl;
}
