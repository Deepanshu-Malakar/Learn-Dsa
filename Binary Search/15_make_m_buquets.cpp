#include<bits/stdc++.h>
using namespace std;

/*
problem statement :
you are given an array in which  it is given the i'th flower will bloom in how many days

you are given how many flowers are needed to make a buquets
you are also given an integer m

find how many days are needed to make  m  buquets


ex :
bloom_days = {7,7,7,7,11,13,11,12,7}
k = flowers_needed_to_make_a_buque = 2
m = 3

solution:
--------
total flowers needed = m*flowers needed for 1 buque
total flowers needed = 3*2 = 6

let low = min(bloom days)   // before min(bloom_days) no flower will be bloomed so answer cannot be less than min(bloom_days)
let high = max(bloom days)  // in max(bloom_days) ie 13 days for this case all the flowers will be bloomed

let mid = (high + low)/2

if flowers bloomed in mid days>= k*m  then mid days is a possible solution ,but to find a smaller solution if possible we do high = mid-1

if flowers_bloomed[mid days] <k*m  then we need more flowers to bloom , so do low = mid+1

repeat it until high<low and then return the possible solution

*/

int minimum(int array[],int size){
    int mini = INT_MAX;

    for(int i=0;i<size;i++){
        if(array[i]<mini){
            mini = array[i];
        }
    }
    return mini;
}

int maximum(int array[], int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>maxi){
            maxi = array[i];
        }
    }
    return maxi;
}

int flowers_bloomed(int array[],int size,int days){
    int count=0;
    for(int i=0;i<size;i++){
        if(array[i]<=days){
            count++;
        }
    }
    return count;
}

int days_required(int bloom_days[],int size,int flowers_per_buque,int total_buquets){
    int flowers_required = flowers_per_buque * total_buquets;

    int low = minimum(bloom_days,size);
    int high = maximum(bloom_days,size);
    int mid = (high + low)/2;
    int possible_solution = -1;

    while(low<=high){
        mid = (high + low)/2;
        if(flowers_bloomed(bloom_days,size,mid)>=flowers_required){
            possible_solution = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(possible_solution == -1){
        printf("Impossible task...\n");
    }
    else{
        return possible_solution;
    }
}

int main(){
    int bloom_days[] = {7,7,7,7,11,13,11,12,7};
    int size = sizeof(bloom_days)/sizeof(int);

    int flowers_per_buque = 2;
    int total_buquets = 3;

    cout<<"minimum days required to make "<<total_buquets<<" buquets of "<<flowers_per_buque<<" flowers each is: "<<days_required(bloom_days,size,flowers_per_buque,total_buquets);
    return 0;
}