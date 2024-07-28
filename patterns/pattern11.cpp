#include<bits/stdc++.h>
using namespace std;

//1
//01
//101
//0101

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
                if(row%2==0)
                {
                    if(col%2==0)
                    {
                        cout<<1;
                    }
                    else
                    {
                        cout<<0;
                    }
                }

                else
                {
                    if(col%2==0)
                    {
                        cout<<0;
                    }
                    else
                    {
                        cout<<1;
                    }
                }
            }
            cout<<endl;

        }
    }
    
}