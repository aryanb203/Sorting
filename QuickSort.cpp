#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int partition(int a[], int l, int h){
    int pivot=a[l];
    int i=l, j=h;

    do{
        do{i++;}while(a[i]<=pivot);  //finding elements smaller than pivot
        do{j--;}while(a[j]>pivot);   //finding elements greater than pivot

        if(i<j) swap(a[i], a[j]);   //swaping smaller and larger elements than pivot
    }while(i<j); 

    swap(a[l], a[j]);   //swapping the pivot element to its position
    return j;           //returning index of pivot (sorted element) 
}

void Quicksort(int a[], int l, int h){  //O(nlogn)- avg and best time, worst time complexity-O(n^2) when list is already sorted
 
    int j;

    if(l<h){   

        j=partition(a, l, h);  //storing pivot
        Quicksort(a, l, j);    //pivot index acting as the new high for smaller elements
        Quicksort(a, j+1, h);

    }
}




int main(){
int a[]= {2, 3, 1, 5, 4, 23, 13, 18, INT_MAX};
Quicksort(a, 0, 8);
for(int i=0; i<8; i++)
    cout<<a[i]<<" ";
return 0;
}