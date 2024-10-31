#include<bits/stdc++.h>
using namespace std;
//print a matrix in spiral order
// 1  2  3  4
// 5  6  7  8
// 9  10 11 12
// 13 14 15 16
// output = 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
void print_spiral_matrix(int a[4][4],int n){
    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;
    int count=0;
    while(left<=right){
        for(int i=left;i<=right;i++){
            cout<<a[top][i]<<" ,";  
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<a[i][right]<<" ,";
        }
        right--;
        for(int i=right;i>=left;i--){
            cout<<a[bottom][i]<<" ,";
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            cout<<a[i][left]<<" ,";
        }
        left++;
    }
}
int main(){
    int arr[4][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    int n=4;

    print_spiral_matrix(arr,n);
}