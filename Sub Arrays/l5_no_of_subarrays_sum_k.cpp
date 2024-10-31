#include<bits/stdc++.h>
using namespace std;

// problem statement:
// find all the subarrays with sum=k
// also find total number of such subarrays
void printArray(int a[],int low,int high){
    cout<<"[ ";
    for(int i=low;i<=high;i++){
        if(i==high){
            cout<<a[i]<<" ";
            break;
        }
        cout<<a[i]<<" , ";
    }
    cout<<"]"<<endl;
}
int main(){
    int a[]={1,1,3,2,5,-1,4,-6,4,3,7,-3};
    int n=sizeof(a)/sizeof(int);
    cout<<"Original Array: ";
    printArray(a,0,n-1);

    int target=10;
    cout<<"Subarrays with sum = "<<target<<" are :"<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==target){
                printArray(a,i,j);
                count++;
            }
        }
    }
    cout<<"Total Subarrays: "<<count;
}