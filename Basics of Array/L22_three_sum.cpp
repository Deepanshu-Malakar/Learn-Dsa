// problem statement:
// return unique triplets in an array which add up to target
#include <bits/stdc++.h>
using namespace std;

// Algorythm:
//  1. sort the array
//  2. use three pointer approach
//  arr[]=[-2 -2 -2 -1 -1 -1 0 0 0 2 2 2 2]
//         i   j                         k
//  3. i=left  j=mid  k=right
//  4. sum=arr[i]+arr[j]+arr[k]
//  5. if sum == target print(arr[i],arr[j],arr[k])
//  6. if sum>target   k--
//  7. if sum < target j++
//  8. the moment you get a triplet you should avoid getting the duplicates of that triplet for that do:
//           1. x=arr[j]
//           2. while(arr[j]==x) d0: j++;
//           3. y=arr[k]
//           4. while(arr[k]==y) do k--;
//  9. the moment j and k cross each other you should increment i till you dont get the same value for i and reset j=i+1 and k=n-1

int findPartitionIndex(int arr[],int low,int high){
    int p=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(p>=arr[i]){
            i++;
        }
        while(p<arr[j]){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low,int high){
    if(low>high){
        return;
    }
    int pivot=findPartitionIndex(arr,low,high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
}

void printArray(int arr[],int n){
    cout<<"[ ";
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<arr[i]<<" ";
            break;
        }
        cout<<arr[i]<<" , ";
    }
    cout<<"]"<<endl;
}
int main()
{   
    cout<<"------------Start--------------"<<endl;
    int arr[] = {-2,1,1,0,2,1,0,0,-2,-1,0,1,2,0};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Original Array: "<<endl;
    printArray(arr,n);
    quickSort(arr,0,n-1);
    int target=4;
    cout<<"Target = "<<target<<endl;
    cout<<"Solutions are: "<<endl;
    int count=0;
    
    for(int i=0;i<n-2;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum>target){
                k--;
            }
            else if(sum <target){
                j++;
            }
            else{
                int temp[3]={arr[i],arr[j],arr[k]};
                count++;
                cout<<count<<". ";
                printArray(temp,3);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]){
                    j++;
                }
                while(j<k && arr[k]==arr[k+1]){
                    k--;
                }
            }
        }
    }
    cout<<"------------End--------------"<<endl;
}