#include<bits/stdc++.h>
using namespace std;

//1
//2 3
//4 5 6
//7 8 9 10

int main(){
    int t;
    cout<<"enter no of test case:";
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cout<<"enter no of lines: ";
        cin>>n;

        for(int row=1;row<=n;row++)
        {
            for(int col=0;col<row;col++)
            {
                cout<<(row*row -row +2)/2 +col<<" ";
            }
            cout<<endl;

        }
    }
    
}