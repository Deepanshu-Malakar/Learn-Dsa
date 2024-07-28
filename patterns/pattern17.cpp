#include<bits/stdc++.h>
using namespace std;

//   A
//  ABA
// ABCBA
//ABCDCBA

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
        {   //space
            for(int col=0;col<n-1-row;col++)
            {
                
                cout<<" ";
            }

            for(int col=0;col<row+1;col++)
            {
                char ch='A'+col;
                cout<<ch;
            }
            for(int col=0;col<row;col++)
            {
                char ch='A'+row-col-1;
                cout<<ch;
            }
            cout<<endl;

        }
    }
    
}