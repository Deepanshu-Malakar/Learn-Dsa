#include <stdio.h>
#include <stdlib.h>

struct my_array
{
    int total_size;
    int used_size;
    int *ptr;
};

void create_array(struct my_array *a, int t_size, int used_size)
{
    a->total_size = t_size;
    a->used_size = used_size;
    a->ptr = (int *)malloc(sizeof(int) * t_size);
}

void append_array(struct my_array *a, int x)
{
    if (a->used_size == a->total_size)
    {
        return;
    }
    
    (a->ptr)[a->used_size] = x;
    (a->used_size)++;
}

void show_array(struct my_array *a)
{
    int n = a->used_size;
    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", (a->ptr)[i]);
    }
    printf("}\n");
}

void pop_array(struct my_array *a)
{
    if (a->used_size == 0)
    {
        return;
    }
    (a->used_size)--;
}

int remove_element(struct my_array *a, int x)
{
    int n = a->used_size;
    if (n == 0)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        if ((a->ptr)[i] == x)
        {
            for (i; i < a->used_size; i++)
            {
                (a->ptr)[i] = (a->ptr)[i + 1];
            }
            break;
        }
    }
    (a->used_size)--;
}

int bubble_sort(struct my_array *a)
{
    int n = a->used_size;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a->ptr)[i] >= (a->ptr)[j])
            {
                int temp = (a->ptr)[i];
                (a->ptr)[i] = (a->ptr)[j];
                (a->ptr)[j] = temp;
            }
        }
    }
}

int main()
{
    struct my_array marks;
    create_array(&marks, 10, 0);
    append_array(&marks, 10);
    append_array(&marks, 20);
    show_array(&marks);
    append_array(&marks, 30);
    show_array(&marks);
    remove_element(&marks, 20);
    show_array(&marks);
    append_array(&marks, 12);
    append_array(&marks, 23);
    append_array(&marks, 3);
    show_array(&marks);
    bubble_sort(&marks);
    show_array(&marks);
}