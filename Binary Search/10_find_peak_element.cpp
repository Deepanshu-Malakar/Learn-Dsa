#include<bits/stdc++.h>
using namespace std;

/*
Problem Statement:
an array which is kind of sorted is given to you ex=[1,2,1,3,4,5,6,4,2,5,4]

the array gains its peak at 2,6 and 5

So an array can gain its peak at multiple indexces it is not just the max element
*/

int find_peak(int array[],int size){
    int low=0;
    int high=size-1;
    int mid=(high+low)/2;

    while(low<=high){
        mid = (high+low)/2;
        if(array[mid]>array[mid-1] && array[mid]>array[mid+1]){
            return array[mid];
        }
        else if(array[mid]>=array[mid-1]  || array[mid]<=array[mid+1]){ // the array is increasing search the right half
            low = mid+1;
        }
        else if(array[mid]>=array[mid+1] || array[mid]<=array[mid-1]){ // the array is decreasing, search the left half
            high = mid-1;
        }
    }
}

int main(){
    int array[]={1,2,1,3,4,5,6,4,3,1,5,3};
    int size = sizeof(array)/sizeof(int);

    cout<<"peak element is "<<find_peak(array,size);
}