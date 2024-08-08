#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
int length = 0;
struct Node *head;

void insert_at_tail(int x)
{
    struct Node *i = head;
    if (length == 0)
    {
        head->data = x;
        head->next = NULL;
        
    }

    else
    {
        while (i->next != NULL)
        {
            i = i->next;
        }
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        i->next = new_node;
        new_node->data = x;
        new_node->next = NULL;
    }
    length++;
    printf("%d inserted at tail , length = %d\n",x,length);
}

void insert_at_head(int x)
{
    struct Node *i = (struct Node *)malloc(sizeof(struct Node));
    i->data = x;
    i->next = head;
    head = i;
    length++;
    printf("%d inserted at head , length = %d\n",x,length);
}

void insert_at_position(int pos, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *i = head;
    for (int c = 1; c < pos - 1; c++)
    {
        i = i->next;
    }
    new_node->data = data;
    new_node->next = i->next;
    i->next = new_node;
    length++;
    printf("%d inserted at position %d , length = %d\n",data,pos,length);
}

void print_linked_list()
{
    struct Node *i = head;
    // printf("");
    while (i != NULL)
    {
        printf(" %d->", i->data);
        i = i->next;
    }
    printf(" NULL\n");
}

void delete_at_tail(){
    struct Node *i=head;

    for(int c=1;c<length-1;c++){
        i=i->next;
    }
    int t=i->next->data;
    i->next=NULL;
    length--;
    printf("%d deleted at tail , length = %d\n",t,length);
}

void delete_at_index(int pos){
    struct Node *i=head;
    for(int t=1;t<pos-1;t++){
        i=i->next;
    }
    int x=i->next->data;
    i->next=i->next->next;
    length--;
    printf("%d deleted at position %d , length = %d\n",x,pos,length);
}

void sort(){
    struct Node *i=head;
    struct Node *j=head->next;
    while(i!=NULL){
        while(j!=NULL){
            if(j->data<i->data){
                int temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
            j=j->next;
        }
        i=i->next;
    }
}

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    // head->data=NULL;
    head->next = NULL;

    insert_at_tail(5);
    // insert_at_head(head,10);
    insert_at_tail(10);
    insert_at_tail(15);
    insert_at_head(10);
    insert_at_position(2, 7);
    print_linked_list();
    delete_at_tail();
    print_linked_list();
    insert_at_tail(12);
    print_linked_list();
    delete_at_index(3);
    print_linked_list();
    sort();
    print_linked_list();
}