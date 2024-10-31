// Problem Statement:
// You are give na matrix of zeroes and ones
// wherever there is a zero mark all the values in that column and row as zero
// example
// 1 1 1 1     0 1 0 0
// 0 1 1 0 =>  0 0 0 0
// 0 1 0 1     0 0 0 0
// 1 1 1 0     0 0 0 0
#include <bits/stdc++.h>
using namespace std;

void set_zeroes(int a[5][5], int n)
{
    int col[n];
    int row[n];
    for (int i = 0; i < n; i++)
    {
        col[i] = 1;
        row[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                col[j] = 0;
                row[i] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (col[i] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                a[j][i] = 0;
            }
        }
        if (row[i] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = 0;
            }
        }
    }
    return;
}
int main()
{
    int n = 5;
    int a[5][5] = {{1, 1, 1, 1, 1},
                   {1, 0, 0, 1, 1},
                   {1, 1, 0, 1, 1},
                   {1, 1, 1, 1, 1},
                   {1, 1, 1, 1, 1}};
    set_zeroes(a, n);
    for (int j = 0; j < n; j++)
    {
        printf("+----");
    }
    puts("+");
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf(" %d  |", a[i][j]);
        }
        puts("");
        for (int j = 0; j < n; j++)
        {
            printf("+----");
        }
        // printf("+");
        puts("+");
    }
}
