#include<bits/stdc++.h>
using namespace std;

//you are given numbers from 1 to n, but one number is missing among them in the array, find the missing number.

int find_missing_number(int a[],int n){
    int sum = (n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        sum=sum-a[i];
    }
    return sum;
}
int main(){
    int a[]={1,4,3,2,5,6,9,7};
    cout<<"missing number is : "<<find_missing_number(a,8);
}