#include<bits/stdc++.h>
using namespace std;

//   *
//  ***
// *****
//*******

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
            for(int col=0;col<n-row-1;col++)
            {
                cout<<" ";
            }
            for(int col=0;col<(2*row)+1;col++)
            {
                cout<<"*";
            }
            cout<<endl;

        }
    }
    
}