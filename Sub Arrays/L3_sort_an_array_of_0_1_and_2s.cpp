#include<bits/stdc++.h>
using namespace std;

//problem statement:
//You are given an array which only contains 0's 1's and 2's
//sort the given array
void print_array(int a[],int n){
    cout<<"[ ";
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<a[i]<<" ";
            break;
        }
        cout<<a[i]<<" , ";
    }
    cout<<"]"<<endl;
}
int main(){
    int a[]={1,1,0,1,1,1,2,2,1,2,1,0,1,0};
    int n=sizeof(a)/sizeof(int);
    cout<<"original array: "<<endl;
    print_array(a,n);
    
    int hash[3]={0,0,0};
    for(int i=0;i<n;i++){
        if(a[i]==0){
            hash[0]++;
        }
        else if(a[i]==1){
            hash[1]++;
        }
        else{
            hash[2]++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<hash[0]){
            a[i]=0;
        }
        else if(i<hash[0]+hash[1]){
            a[i]=1;
        }
        else{
            a[i]=2;
        }
    }
    cout<<"Sorted array: "<<endl;
    print_array(a,n);
}