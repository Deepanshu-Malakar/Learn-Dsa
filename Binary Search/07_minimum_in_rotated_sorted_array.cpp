#include<bits/stdc++.h>
using namespace std;

int findMin(int array[],int size){
    int low=0;
    int high=size-1;
    int mid=(high+low)/2;
    int min=array[mid];
    while (low<=high)
    {
        mid=(high+low)/2;
        if(array[mid]<min){
            min=array[mid];
        }
        if(array[low]==array[mid] && array[mid]==array[high]){
            low++;
            high--;
        }
        else if(array[low]<=array[mid]){                        //left half is sorted
            if(array[low]<min) min=array[mid];
            low=mid+1;
        }
        else{                                                   //right half is sorted
            if(array[mid]<min) min=array[mid];
            high=mid-1;
        }

    }
    return min;
    
}

int main(){          //l  m   h
    int array[]={30,45,81,1,2,5,7,9,24,25,26,27,28};
    int size=sizeof(array)/sizeof(int);
    int ele=26;
    cout<<"minimum element = "<<findMin(array,size);
}