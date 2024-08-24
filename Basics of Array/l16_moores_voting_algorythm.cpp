/*problem statement:
You are given an integer array of size n
find the element which appears more than n/2 times

moores algorythm
this algorythm helps us find which element has the heighest probability to be the majority element

1] make 2 variables count,element ;
2] at first let count=0;
3]run a for loop from 0 to n
4]if count ==0 , assign element =arr[i]
6]if element ==a[i], count++
7]if element !=a[i], count--
8]till the end of the for loop if count<=0 then there is no majority element
9]if count >0 then the majority element maybe element
10]count the number of times element occurs in array , if it occurs more than n/2 times it is the majority element

dry run     0 1 2 3 4  <--index of array
let arr[n]={1,2,3,3,3};
i=0] count=1,element=1
i=1] count=1-1=0  (since arr[i]!=element=1),
i=2] count=0 so assign element = a[2] = 3 ;count =1
1=3] count=1,element=3,a[3]=3 ;a[3]==element so count=2
i=4] count=2,element=3,a[4]=3;a[4]==element so count=3
since till the end count>0 then element=3 may be the majority element
check how many times 3 occured to find if it is majority or not
*/

#include <bits/stdc++.h>
using namespace std;

int a[13] = {3, 2, 3, 2, 3, 3, 2, 2, 3, 4, 3, 3, 4};

int moores_voting()
{
    int n = 13;
    int element;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = a[i];
            count = 1;
        }
        else if (a[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    if (count > 0)
    {
        return element;
    }
    else
    {
        return element - 1;
    }
}

int main()
{
    int possible_solution = moores_voting();
    int count = 0;
    for (int i = 0; i < 13; i++)
    {
        if (a[i] == possible_solution)
        {
            count++;
            if (count > 13 / 2)
            {
                cout << "majority element is: " << possible_solution;
                return 0;
            }
        }
    }
    cout << "there is no majority element";
    return -1;
}