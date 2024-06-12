#include <bits\stdc++.h>
#include <stdlib.h>
using namespace std;

class Array
{
public:
    int total_size;
    int used_size;
    int *ptr;

    Array(int t_size)
    {
        total_size = t_size;
        used_size = 0;
        ptr = (int *)malloc(total_size * sizeof(int));
    }

    void append(int x)
    {
        if (used_size == total_size)
        {
            cout << "The Array us full... " << endl;
            return;
        }
        ptr[used_size] = x;
        used_size++;
    }
    void insert_index(int index, int x)
    {
        if (used_size == total_size)
        {
            cout << "The Array us full... " << endl;
            return;
        }
        for (int i = used_size; i > index; i--)
        {
            ptr[i] = ptr[i - 1];
        }
        ptr[index] = x;
        used_size++;
    }

    void pop()
    {
        if (used_size == 0)
        {
            cout << "the array is empty" << endl;
            return;
        }
        ptr[used_size] = 0;
        used_size--;
    }

    void show()
    {   
        // for(int i=0;i<5*used_size;i++){
            // cout<<"-";
        // }
        // cout<<endl;
        cout << "[ ";
        for (int i = 0; i < used_size; i++)
        {
            if (i == used_size - 1)
            {
                cout << ptr[i] << " ";
            }
            else
            {
                cout << ptr[i] << " | ";
            }
        }
        cout << "]" << endl;
        for(int i=0;i<5*used_size;i++){
            cout<<"-";
        }
        cout<<endl;
    }

    void remove(int element)
    {
        if (used_size == 0)
        {
            cout << "the array is empty" << endl;
            return;
        }
        for (int i = 0; i < used_size; i++)
        {
            if (ptr[i] == element)
            {
                for (int j = i; j < used_size - 1; j++)
                {
                    ptr[j] = ptr[j + 1];
                }
                used_size--;
                break;
            }
        }
    }

    void selection_sort()
    {
        for (int i = 0; i < used_size - 1; i++)
        {
            for (int j = i; j < used_size; j++)
            {
                if (ptr[i] >= ptr[j])
                {
                    int temp = ptr[i];
                    ptr[i] = ptr[j];
                    ptr[j] = temp;
                }
            }
        }
    }

    void bubble_sort(){
        for(int i=0;i<used_size-1;i++){
            for(int j=0;j<used_size-i;j++){
                if(ptr[j]>=ptr[j+1]){
                    int temp=ptr[j];
                    ptr[j]=ptr[j+1];
                    ptr[j+1]=temp;
                }
            }
        }
    }
};

int main()
{
    Array marks(10);
    marks.append(12);
    marks.append(10);
    marks.append(1);
    marks.insert_index(2, 4);
    marks.show();
    marks.selection_sort();
    marks.show();
    marks.insert_index(2,3);
    marks.insert_index(1,76);
    marks.insert_index(3,14);
    marks.show();
    marks.bubble_sort();
    marks.show();
}