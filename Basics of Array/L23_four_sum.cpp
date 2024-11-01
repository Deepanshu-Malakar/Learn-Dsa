#include<bits/stdc++.h>
using namespace std;
// Problem statement:
// You are given an array of integers and a target
// find four unique numbers from that array which add up to target

void printArray(int arr[],int n){
    cout<<"[ ";
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<arr[i]<<" ";
            break;
        }
        cout<<arr[i]<<" , ";
    }
    cout<<"]"<<endl;
}

void quickSort(int arr[],int low,int high){
    if(low>high){
        return;
    }

    int p=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(p>=arr[i]){
            i++;
        }
        while(p<arr[j]){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);

    int pivot=j;
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
}

int main(){
    int arr[]={-2,1,1,0,2,1,0,0,-2,-1,0,1,2,0};
    int n=sizeof(arr)/sizeof(int);
    cout<<"------------Start-------------"<<endl;
    cout<<"Original Array:"<<endl;
    printArray(arr,n);

    quickSort(arr,0,n-1);
    int target=3;
    cout<<"Target = "<<target<<endl;
    int count=0;
    cout<<"Solutions are:"<<endl;
    for(int i=0;i<n-3;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n-2;j++){
            if(j>i+1 && arr[j]==arr[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                int sum=arr[i]+arr[j]+arr[k]+arr[l];
                if(sum>target){
                    l--;
                }
                else if(sum<target){
                    k++;
                }
                else{
                    int temp[4]={arr[i],arr[j],arr[k],arr[l]};
                    k++;
                    l--;
                    count++;
                    cout<<count<<". ";
                    printArray(temp,4);
                    while(k<l && arr[k]==arr[k-1]) k++;
                    while(k<l && arr[l]==arr[l+1]) l--;
                }
            }
        }
    }
    cout<<"------------Start-------------"<<endl;
}