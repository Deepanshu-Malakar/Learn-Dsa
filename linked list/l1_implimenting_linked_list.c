#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void create_linked_list(struct Node *head, int data)
{
    head->data = data;
    head->next = NULL;
}

void append(struct Node *head, int data)
{
    struct Node *i = head;
    while (i->next != NULL)
    {
        i = i->next;
    }
    struct Node *new_node;
    i->next=new_node;
    new_node->data=data;
    new_node->next=NULL;

}

void show(struct Node *head)
{
    struct Node *i = head;
    printf("{ ");
    while (i->next != NULL)
    {
        printf("%d ,",i->data);
        i=i->next;
        
    }
    printf("%d ->",i->data);
    printf("}\n");
}

int main(){
    struct Node head;
    create_linked_list(&head,5);
    show(&head);
    // show(&head);
    append(&head,3);
    show(&head);

}