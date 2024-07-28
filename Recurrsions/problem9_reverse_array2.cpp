#include<bits/stdc++.h>
using namespace std;
int reverse(int arr[],int n,int i=0){
    
    if(i<n-i){
        int t=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=t;
        reverse(arr,n,i+1);
    }
}

int main(){
    int a[]={10,20,30,40,50};
    reverse(a,(sizeof(a))/4 -1);
    for(int i=0;i<5;i++){
        cout<<a[i]<<", ";
    }
    cout<<endl;
    
    cout<<"Hello world";
    
}