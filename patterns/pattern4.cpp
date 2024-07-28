#include<bits/stdc++.h>
using namespace std;

//1
//22
//333
//4444

int main(){
    int t;
    cout<<"enter no of test case:";
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cout<<"enter no of lines: ";
        cin>>n;

        for(int row=0;row<n;row++)
        {
            for(int col=0;col<=row;col++)
            {
                cout<<(row+1)<<" ";
            }
            cout<<endl;

        }
    }
    
}