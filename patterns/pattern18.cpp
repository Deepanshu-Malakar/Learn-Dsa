#include<bits/stdc++.h>
using namespace std;

//D
//C D
//B C D
//A B C D

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
                char x='A'+n-row-1+col;
                cout<<x<<" ";
            }
            cout<<endl;

        }
    }
    
}