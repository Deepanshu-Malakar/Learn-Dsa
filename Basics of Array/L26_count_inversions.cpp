#include<bits/stdc++.h>
using namespace std;

//Problem statement:
//You are given an array of integers  return pairs such that arr[i]>arr[j] where j>i
//example = arr=[5,2,3,4,1]  pairs=(5,2),(5,3),(5,4),(5,1),(2,1),(3,1),(4,1)

int printInversions(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                printf("(%d,%d)",arr[i],arr[j]);
                puts("");
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[]={5,2,3,4,1};
    int n=sizeof(arr)/sizeof(int);

    int inversions=printInversions(arr,n);
    cout<<"Total number of inversions is = "<<inversions;
}