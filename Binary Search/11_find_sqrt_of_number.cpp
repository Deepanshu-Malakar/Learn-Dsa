#include<bits/stdc++.h>
using namespace std;

/*
Problem statement:
you are given an integer n
find square root of n using binary search

solution:
let low=0 high=n
mid = (high+low)/2

if(mid * mid == n) return mid
else if(mid * mid > n) high = mid-1 
else if(mid * mid < n) low = mid+1 ,possible_square_root=mid

if low>high  then return possible_square_root

*/

int square_root(int n){
    int low = 0;
    int high = n;
    int mid = (low + high)/2;
    int possible_square_root=0;

    while(low<=high){
        mid = (high + low)/2;

        if( mid *mid == n){
            return mid;
        }
        else if( mid * mid >n){
            high = mid-1;
        }
        else if(mid*mid <n){
            low = mid+1;
            possible_square_root=mid;
        }
    }
    return possible_square_root;
}

int main(){
    int n = 141;
    cout<<"square root of "<<n<<" is = "<<square_root(n);
}