#include<iostream>
#include "bits/stdc++.h"
using namespace std;

void Merge(int A[], int l, int mid, int h){

    int B[100];
    int i=l, j=mid+1; //for the array a
    int k=l; //for auxilary array
    while(i<=mid && j<=h){
        if(A[i]<A[j])
            B[k++] = A[i++];
        else    
            B[k++] = A[j++];
    }

    for(; i<=mid; i++) //copying remaining elements in the arrays
        B[k++]=A[i];

    for(; j<=h; j++)
        B[k++]=A[j];
    
    for(i=l; i<=h; i++)   //copying elements from B back to A
        A[i]=B[i];

}


void IMergeSort(int a[], int n){   //O(nlogn) 
    int mid, l, h, p;  //p is used for number of passes
    for(p=2; p<=n; p=p*2){
        for(int i=0; i+p-1<n; i=i+p){
            l=i;
            h=i+p-1;
            mid= (l+h)/2;
            Merge(a, l, mid, h);

        }
        
    }
    if(p/2 < n)    //for leftover elements
        Merge(a, 0, p/2, n-1);

}


void RMergeSort(int a[], int l, int h){  //O(nlogn)
    
    if(l<h){
        int mid = (l+h)/2;          //find mid
        RMergeSort(a, l, mid);      //recursive call for left side
        RMergeSort(a, mid+1, h);    //recursive call for right side
        Merge(a, l, mid, h);        //mergeing the elements (first each element with side element, then 2 arrays of 2 elements and so on)
    }
}




int main(){
int a[]= {3, 2, 5, 1, 4, 23, 19, 18};

RMergeSort(a, 0, 7);
for(int i=0; i<8; i++)
    cout<<a[i]<<" ";

return 0;
}