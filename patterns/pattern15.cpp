#include<bits/stdc++.h>
using namespace std;

//A B C D
//A B c
//A B 
//A 

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
            for(char col='A';col<='A'+n-1-row;col++)
            {
                cout<<col<<" ";
            }
            cout<<endl;

        }
    }
    
}