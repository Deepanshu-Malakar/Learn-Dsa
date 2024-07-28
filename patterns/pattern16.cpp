#include<bits/stdc++.h>
using namespace std;

//A
//B B
//C C C
//D D D D

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
                char x='A'+row;
                cout<<x<<" ";
            }
            cout<<endl;

        }
    }
    
}