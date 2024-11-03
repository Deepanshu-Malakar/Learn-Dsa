#include<bits/stdc++.h>
using namespace std;

//Problem Statement:
//you are given an array of n elements in which one element is missing and one is repeating
//find the missing and repeating element
//[3,5,1,1,6,2]    4->missing  1->repeating

//Algorythm:
//find sum of all elements of array
//3+5+1+1+6+2=18   expected sum = 1+2+3+4+5+6=21
//let missing=x  repeating=y        
//expected_sum= array_sum-y+x
//x-y=expected_sum-array_sum
// x,y>0
// for (int i=1 to i<=n) 
//      y=array_sum  - expected_sum + i
//      if( y>0) missing=i repeating=y break;
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

int sum_array(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    cout<<"-------------------Start-------------------"<<endl;
    int arr[]={3,5,1,1,6,2};
    int n=sizeof(arr)/sizeof(int);

    cout<<"Original Array:"<<endl;
    printArray(arr,n);

    int expected_sum=n*(n+1)/2;
    int actual_sum=sum_array(arr,n);

    int repeating_element=0;
    int missing_element=0;
    for(int i=1;i<=n;i++){
        repeating_element = actual_sum - expected_sum +i;
        if(repeating_element>0){
            missing_element=i;
            break;
        }
    }
    cout<<"Repeating element = "<<repeating_element<<endl;
    cout<<"Missing element = "<<missing_element<<endl;
    cout<<"--------------------End--------------------"<<endl;
}