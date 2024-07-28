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
        for (int i = 0; i < 5 * used_size; i++)
        {
            cout << "-";
        }
        cout << endl;
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

    void bubble_sort()
    {
        for (int i = 0; i < used_size - 1; i++)
        {
            for (int j = 0; j < used_size - i; j++)
            {
                if (ptr[j] >= ptr[j + 1])
                {
                    int temp = ptr[j];
                    ptr[j] = ptr[j + 1];
                    ptr[j + 1] = temp;
                }
            }
        }
    }

    void insertion_sort()
    {
        for (int i = 0; i < used_size; i++)
        {
            int j = i;
            while (j > 0 && ptr[j - 1] >= ptr[j])
            {
                int temp = ptr[j];
                ptr[j] = ptr[j - 1];
                ptr[j - 1] = temp;
                j--;
            }
        }
    }

    void merge_sort(int low , int high)
    {
        if (low >= high)
        {
            return;
        }
        int mid = (low + high) / 2;
        merge_sort(0, mid);
        merge_sort(mid + 1, high);
        int i = low, j = mid + 1;
        vector<int> a;
        while (i <= mid && j <= high)
        {
            if (ptr[i] <= ptr[j])
            {
                a.push_back(ptr[i]);
                i++;
            }
            else
            {
                a.push_back(ptr[j]);
                j++;
            }
        }
        if (i <= mid)
        {
            for (i; i <= mid; i++)
            {
                a.push_back(ptr[i]);
            }
        }
        else if (j <= high)
        {
            for (j; j <= high; j++)
            {
                a.push_back(ptr[j]);
            }
        }
        for (int i = low; i <= high; i++)
        {
            ptr[i] = a[i - low];
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
    marks.insert_index(2, 3);
    marks.insert_index(1, 76);
    marks.insert_index(3, 14);
    marks.show();
    marks.insertion_sort();
    marks.show();
    marks.insert_index(4,11);
    marks.insert_index(4,1);
    marks.show();
    marks.merge_sort(0,8);
    marks.show();

}