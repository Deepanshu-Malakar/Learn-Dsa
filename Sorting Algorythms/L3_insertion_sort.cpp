#include<bits/stdc++.h>
using namespace std;

//a={2,4,3,1,5}
//check the order of first 2 elements
//then check the order of first 3 elements
//then check the order of first 4 elements
//and soo onn.....

int main(){
    vector<int> v={2,4,3,1,5};
    
    for(int i=0;i<5;i++)
    {
        int j=i;
        while(j>0 && v[j]<v[j-1]){
            int temp=v[j];
            v[j]=v[j-1];
            v[j-1]=temp;
            j--;
        }
    }

    for(auto it:v){
        cout<<it<<" ,";
    }

}