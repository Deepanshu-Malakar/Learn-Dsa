#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[],int n,int element){
    int low=0;
    int high=n-1;
    
    while(low<high){
        int mid=(low+high)/2;

        if(array[mid]==element){
            return mid;
        }
        else if(array[mid]>element){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    int array[]={1,2,5,7,9,13,17,25,47,61};
    int size=sizeof(array)/sizeof(int);
    int ele=13;
    cout<<"element ="<<ele<<"is found at index = "<<binarySearch(array,size,ele);
}