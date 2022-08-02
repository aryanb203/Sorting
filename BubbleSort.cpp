#include<iostream>
#include "bits/stdc++.h"
using namespace std;

void BubbleSort(int a[], int n){  //O(n^2)
    int flag;
    for(int i=0; i<n-1; i++){
        flag=0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                flag=1;
            }
        }
         if(flag==0){
                cout<<"sorted in "<<i+1<<" passes"<<endl;
                break;
            }
    }

}


int main(){
int a[]= {1, 2 , 3, 4, 5, 6};
BubbleSort(a,6);
for(int i=0; i<6; i++)
    cout<<a[i]<<" ";
return 0;
}
