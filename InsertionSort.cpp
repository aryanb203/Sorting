#include<iostream>
#include "bits/stdc++.h"
using namespace std;

void InsertionSort(int a[], int n){ //O(n^2)

    for(int i=1; i<n; i++){
        int j=i-1, x=a[i];  
        while(a[j]>x && j>=0){
            a[j+1]=a[j];
            j--;
        }
    a[j+1]=x;
    }

}


int main(){
int a[]= {1, 3, 2, 5, 6};
InsertionSort(a, 5);
for(int i=0; i<5; i++)
    cout<<a[i]<<" ";
return 0;
}