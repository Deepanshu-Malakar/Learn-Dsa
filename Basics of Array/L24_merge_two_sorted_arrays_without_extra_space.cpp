#include<bits/stdc++.h>
using namespace std;

//Problem statement:
// you are given two sorted arrays , merge them without using any extra array
//example:  [1,2,3,6]   [1,4,5,7]
//output:   [1,1,2,3]   [4,5,6,7]

void quickSort(int arr[],int low,int high){
    if(low>high){
        return;
    }
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);

    pivot=j;
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
}

void printArray(int arr[],int n){
    cout<<"[";
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
}

int main(){
    cout<<"----------------------Start----------------------"<<endl;
    int a1[]={1,2,3,6,9,44,56,91};
    int a2[]={1,4,5,7,8,21,25};
    int n1=sizeof(a1)/sizeof(int);
    int n2=sizeof(a2)/sizeof(int);
    cout<<"Original Arrays:"<<endl;
    printArray(a1,n1);
    printArray(a2,n2);

    int i=n1-1;
    int j=0;
    while(i>=0 && j<n2){
        if(a1[i]>a2[j]){
            swap(a1[i],a2[j]);
        }
        i--;
        j++;
    }
    quickSort(a1,0,n1-1);
    quickSort(a2,0,n2-1);

    cout<<"Sorted Arrays:"<<endl;

    printArray(a1,n1);
    printArray(a2,n2);
    cout<<"----------------------End----------------------"<<endl;

}