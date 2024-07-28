#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,3,2,3,4,3,2,2};
    map <int,int> mpp;
    for(int i=0;i<11;i++){
        mpp[arr[i]]++;

    }
    int max_frequency=0;
    for(int i=0;i<=4;i++){
        int element=i;
        int count=mpp[i];
        max_frequency=max(max_frequency,count);
    }
    for(int i=0;i<=4;i++){
        if(mpp[i]==max_frequency){
            cout<<"element with max frequency is "<<i;
        }
    }
    
}