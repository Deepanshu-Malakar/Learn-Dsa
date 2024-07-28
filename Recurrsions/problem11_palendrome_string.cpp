#include<bits/stdc++.h>
using namespace std;
int check(string s,int i=0){
    int n=s.length()-1;
    if(i<n-i){
        if(s[i]!=s[n-i]){
            cout<<"not palendorme";
            return 0;
        }
        else{
            check(s,i+1);
        }
    }
    else{
        cout<<"Palendrome";
    }
}
int main(){
    check("malayalayalam");

}