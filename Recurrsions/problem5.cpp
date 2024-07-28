#include<bits/stdc++.h>
using namespace std;
int sum(int i,int s=0){
    if(i<1){
        //cout<<s<<endl;
        return s;
    }
    else{
        s=s+i;
        i--;
        sum(i,s);
    }
}
int main(){
    //sum of n numbers using recurrsions 
    cout<<sum(10);
}