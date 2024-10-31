#include<bits/stdc++.h>
using namespace std;
// problem statement :
// You need to find ncr (n combination r)=n!/(n-r)!r! in lowest time
//then find the nth row of pascels triangle

int ncr(int n,int r){
    int result=1;
    if(r==0){
        return 1;
    }
    for(int i=n;i>=n-r+1;i--){
        result=result*i/(n-i+1);
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<n<<"th row of pascels triangle is: "<<endl;
    cout<<"[ ";
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<1<<" ";
            break;
        }
        cout<<ncr(n-1,i)<<" , ";
    }
    cout<<"]";
}