#include<iostream>
#include "bits/stdc++.h"
using namespace std;


void SelectionSort(int a[], int n){

    for(int i=0; i<n; i++){
        int small=i;
        for(int j=i+1; j<n; j++){
            if(a[small]>a[j])
                small=j;
        }
        if(i!=small)
            swap(a[small], a[i]);
    }
    
}



int main(){
int a[]= {1, 3, 2, 5, 4};
SelectionSort(a, 5);
for(int i=0; i<5; i++)
    cout<<a[i]<<" ";
return 0;
}