#include<bits/stdc++.h>
using namespace std;

void show_array(int a[],int n){
    cout<<"{ ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" , ";
    }
    cout<<"}";
}

void rotate_array_by_1_place(int a[],int n){
    int temp=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    rotate_array_by_1_place(arr,5);
    show_array(arr,n);
}