#include<bits/stdc++.h>
using namespace std;

//upper bound of x = first index at which array[index]>x
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

int main(){
    int array[]={1,2,5,7,9,25,25,25,47,61};
    int size=sizeof(array)/sizeof(int);
    int ele=25;
    cout<<"upper bound of element = "<<ele<<" is found at index = "<<upperBound(array,size,ele);
}