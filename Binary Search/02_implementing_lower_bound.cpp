#include<bits/stdc++.h>
using namespace std;

//lower bound of x = smallest index such that array[index]>=x

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

int main(){
    int array[]={1,2,5,7,9,13,17,25,47,61};
    int size=sizeof(array)/sizeof(int);
    int ele=26;
    cout<<"lower bound of element = "<<ele<<" is found at index = "<<lowerBound(array,size,ele);
}