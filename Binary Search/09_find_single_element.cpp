#include<bits/stdc++.h>
using namespace std;
/*
Problem Statement:
You are given a sorted array in which every element appears twice except for 1 element which appears only once
find that element


Implement it using binary search....

solution:
let us consider an array for example:  {1,1,2,2,3,3,4,5,5,6,6,7,7}
here 4 comes only once

if you look at elements at right half and left half of 4 you will find a pattern

let us first explore the left half
(1,1)  = {0th ,1st index}   even,odd
(2,2)  = {2nd ,3rd index}   even,odd
(3,3)  = {4th ,5th index}   even,odd

Exploring the right half
(5,5)  = {7th ,8th index}   odd,even
(6,6)  = {9th ,10th index}   odd,even
(7,7)  = {11th ,12th index}   odd,even

approach:
whenever you are at an element say index mid,  if arr[mid]!=arr[mid-1]!=arr[mid+1]  then arr[mid] is you single element
if arr[mid]==arr[mid+1] and mid is even ,then even,odd you are at left half so search at the right half
if arr[mid]==arr[mid-1] and mid is odd , then also even,odd you are at left half, search at right half

if arr[mid]==arr[mid+1] and mid is odd then odd,even you are at right half ,search in left half
if arr[mid]==arr[mid-1] and mid is even then also odd,even  you are at right half ,search in left half 



*/

char half_to_search(int array[],int mid){
    if(mid%2==0){
        if(array[mid]==array[mid+1]) return 'R';
        else if(array[mid] == array[mid-1]) return 'L';
    }
    else{
        if(array[mid]==array[mid+1]) return 'L';
        else if(array[mid] == array[mid-1]) return 'R';
    }
}
int find_single_element(int array[],int size){
    int low = 0;
    int high = size-1;

    int mid = (high+low)/2;
    while(low<=high){
        mid = (high+low)/2;

        if(array[mid]!=array[mid+1] && array[mid]!=array[mid-1]){
            return array[mid];
        }

        else if(half_to_search(array,mid)=='R'){
            low = mid+1;
        }
        else if(half_to_search(array,mid)=='L'){
            high = mid-1;
        }
    }
}

int main(){
    int array[]={1,1,2,2,3,3,4,5,5,6,6,7,7,8,8};
    int size = sizeof(array)/sizeof(int);

    cout<<"single element = "<<find_single_element(array,size);
    return 0;
}