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

void rotate_array_by_K_places(int a[],int n ,int k){
    int x = k%n;
    for(int i=0;i<x;i++){
        rotate_array_by_1_place(a,n);
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    rotate_array_by_K_places(arr,5,6);
    show_array(arr,n);
}