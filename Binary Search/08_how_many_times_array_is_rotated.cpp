#include<bits/stdc++.h>
using namespace std;

/*
Problem statement:
You are given a rotated sorted array like [8,9,10,11,1,2,3,4,5,6,7]

you need to find how many times the sorted array was rotated in order to get the current array

solution:
find the index of the minimum number in array, that will be the number of times the array has been rotated

example:  array = [1,2,3,4,5]
minimum = 1   index=0
so array is rotated 0 times

you need to do this using binary search
*/

char sorted_half(int array[],int low,int high){
    int mid = (high+low)/2;
    if(array[mid]>=array[low]){
        return 'L';
    }
    else if(array[mid]<=array[high]){
        return 'R';
    }
}

int find_min_index(int array[],int size){
    int low = 0;
    int high = size -1;
    int mid = (high+low)/2;

    int minimum = INT_MAX;
    int min_index = 0;

    while(low<=high){
        mid = (high+low)/2;
        if(array[mid]<minimum){
            minimum = array[mid];
            min_index = mid;
        }
        if(sorted_half(array,low,high)=='L'){
            low = mid +1;
        }
        else if(sorted_half(array,low,high)=='R'){
            high = mid-1;
        }
    }
    return min_index;
}

int main(){
    int array[] = {8,8,10,10,11,1,3,3,4,5,6,8};
    int size = sizeof(array)/sizeof(int);

    cout<<"Array is rotate "<<find_min_index(array,size)<<" times";
    return 0;

}