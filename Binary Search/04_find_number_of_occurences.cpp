#include<bits/stdc++.h>
using namespace std;

int lowerBound(int array[],int n,int element){
    int low=0;
    int high=n-1;
    int lowerbound=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(array[mid]==element){
            high=mid;
            lowerbound=mid;
        }
        else if(array[mid]>element){
            high=mid;
            lowerbound=mid;
        }
        else{
            low=mid+1;
        }
    }
    return lowerbound;
}

int upperBound(int array[],int n,int element){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    int upperbound=0;
    while(low<high){
        mid=(low+high)/2;
        if(array[mid]==element){
            upperbound=mid+1;
            low=mid+1;
        }
        else if(array[mid]>element){
            upperbound=mid;
            high=mid-1;
        }
        else{
            low=mid;
        }
    }
    return upperbound;
}

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

int no_of_occurences(int array[],int n,int element){
    if(binarySearch(array,n,element)==-1){
        return 0;
    }
    return upperBound(array,n,element)-lowerBound(array,n,element);
}

int main(){
    int array[]={1,2,5,7,9,25,25,25,47,61};
    int size=sizeof(array)/sizeof(int);
    int ele=25;
    cout<<"number of occurences of element = "<<ele<<" are = "<<no_of_occurences(array,size,ele);
}