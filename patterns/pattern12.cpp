#include<bits/stdc++.h>
using namespace std;

//1      1
//12    21
//123  321
//12344321


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
                cout<<col+1;
            }
            //space
            for(int col=0;col<(n-row-1)*2;col++)
            {
                cout<<" ";
            }
            for(int col=0;col<=row;col++)
            {
                cout<<row+1-col;
            }
            cout<<endl;

        }
        
        
    }
    
}