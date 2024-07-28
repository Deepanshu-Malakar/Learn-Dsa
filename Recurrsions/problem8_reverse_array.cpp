#include<bits/stdc++.h>
using namespace std;
//reverse array without recurrsions
int main(){
    int arr[]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        if(i>=4-i)
        {
            break;
        }
        else{
        int t=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=t;}
    }
    for(auto it:arr){
        cout<<it<<endl;
    }
}