#include<bits/stdc++.h>
using namespace std;

/*
problem statement:
You are given an array which contains number of bananas in each plate , and number of hours in which koko needs to eat all the bananas

find the number of bananas she should eat every hour to eat all bananas in th given time.
sounds simple right? well there is a twist 
lets say koko can eat 2 bananas in 1 hour and a plate contains 3 bananas
she will eat 2 bananas in 1 hour and 1 banana in half hour but she cannot go to the next plate in this half hour, she has to wait half an hour and then move to next plate

so even though she could eat 2 bananas in 1 hour
she will still take 2 hours to eat 3 bananas in one plate

example 
hours = 8
array ={3,6,4,2,1}

let number of bananas eaten per hour =x
let x=1
she takes 3 hours to eat 1st plate,6 then 4 then 2 then 1 hour for next plate so total = 3+6+4+2+1= 16 > 8 so x=1 is not a solution

let x=2
she takes 2hrs for 1st,3hrs for 2nd,then 2,then 1,then 1 hour so total = 2+3+2+1+1=9  9>8 so x=2 is not a solution

let x=3
she takes 1hr for 1st, 2 for 2nd,then 2,then 1, then 1 so total = 1+2+2+1+1=7  7<8 so x=3 is our answer


but this is a linear time solution , find a solution using logrithmic time
*/

bool speed_is_enough(int array[],int size,int hours,int speed){
    int total_time=0;
    for(int i=0;i<size;i++){
        if(array[i]%speed==0){
            total_time += array[i]/speed;
        }
        else{
            total_time+= array[i]/speed +1;
        }
    }
    if(total_time<=hours){
        return true;
    }
    else{
        return false;
    }
}

int maximum_array(int array[],int size){
    int maximum = 0;
    for(int i=0;i<size;i++){
        if(array[i]>maximum){
            maximum = array[i];
        }
    }
    return maximum;
}

int bananas_eaten_per_hour(int array[],int hours,int size){
    int low = 1;
    int high = maximum_array(array,size);
    int speed = (high + low)/2;

    if(size > hours){
        printf("Infinite, this task is impossible\n");
        return -1;
    }
    int possible_solution = 1;
    while(low<=high){
        speed = (high + low)/2;
        if(speed_is_enough(array,size,hours,speed)){    // if this speed is enough it may be a possible solution but you need to check if there is a lower speed possible
            high = speed-1;
            possible_solution = speed;
        }
        else{
            low = speed+1;
        }
    }
    return possible_solution;
}

int main(){
    int array[] = {1, 9, 2, 1, 6, 4, 2, 1, 6, 4, 9, 3, 4, 2, 6, 2, 9, 3, 9, 10, 7, 3, 8, 9, 1, 5, 7, 9, 10, 4, 7, 1, 10, 4, 7, 1, 6, 3, 4, 7, 5, 8, 2, 10, 7, 2, 3, 1, 4, 2, 4, 9, 7, 5, 5, 3, 4, 1, 3, 7, 6, 9, 2, 1, 10, 4, 1, 5, 6, 3, 8, 5, 7, 7, 4, 5, 4, 4, 7, 4, 2, 5, 5, 4, 5, 8, 7, 2, 1, 8, 8, 10, 6, 1, 5, 8, 2, 2, 4, 9};
    int size = sizeof(array)/sizeof(int);

    int hours = 120;

    cout<<"bananas eaten per hour is to eat all bananas in "<<hours<<" hrs is: "<<bananas_eaten_per_hour(array,hours,size);
    return 0;
}