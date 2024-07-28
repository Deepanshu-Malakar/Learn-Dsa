#include<bits/stdc++.h>
using namespace std;

//* * * * * * * *  0
//* * *     * * *  2
//* *         * *  4
//*             *  6
//*             *
//* *         * *
//* * *     * * *
//* * * * * * * *

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
            for(int col=0;col<n-row;col++)
            {
                
                cout<<'*'<<" ";
            }
            //space
            for(int col=0;col<=(row)*2;col++)
            {
                cout<<" "<<" ";
            }
            for(int col=0;col<n-row;col++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;

        }

        for(int row=0;row<n;row++)
        {
            for(int col=0;col<=row;col++)
            {
                
                cout<<'*'<<" ";
            }
            //space
            for(int col=0;col<=(n-row-1)*2;col++)
            {
                cout<<" "<<" ";
            }
            for(int col=0;col<row+1;col++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;

        }
    }
    
}