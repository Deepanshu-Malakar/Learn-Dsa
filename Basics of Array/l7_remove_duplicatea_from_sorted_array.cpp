#include<bits/stdc++.h>
using namespace std;

void remove_duplicate(int arr[],int n){
    int insert_index=1;
    int cursor=0;

    for(cursor;cursor<n-1;cursor++){
        if(arr[cursor+1]!=arr[cursor]){
            arr[insert_index]=arr[cursor+1];
            insert_index++;
        }
    }
}

void show_array(int arr[],int n){
    cout<<"{ ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<"}";
}

int main(){
    int arr[]={1,1,2,2,2,3,3,4};
    remove_duplicate(arr,8);
    show_array(arr,4);

}