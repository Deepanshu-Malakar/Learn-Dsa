#include<bits/stdc++.h>
using namespace std;

//you are given an array in which duplicated may be present , find the index of the element 

int BinarySearch(int array[],int size,int element){
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high){
        mid=(high+low)/2;

        if(array[mid]==element){
            return mid;
        }

        if(array[low]==array[mid] && array[mid]==array[high]){
            low++;
            high--;
        }
        else if(array[mid]<=array[high]){       //right half sorted
            if(element>=array[mid] && element<=array[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else{               //left half sorted
            if(element>=array[low] && element<=array[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
}

int main(){
    int array[]={26,26,81,1,2,5,7,9,24,25,26,26,26};
    int size=sizeof(array)/sizeof(int);
    int ele=26;
    cout<<"element = "<<ele<<" is present at index = "<<BinarySearch(array,size,ele);
}
