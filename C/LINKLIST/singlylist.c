#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    int key;
    struct node *next;
};

struct node *head = NULL;


struct node *newnode(int data, int key)
{

    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->key = key;
    newnode->next = NULL;
    return newnode;
}
void display()
{
    struct node *temp = head;
    while (temp->next != NULL)
    {
        printf("%d %d", temp->data);
        temp = temp->next;
    }
}

void FirstInsert(int data, int key)
{
    if (head == NULL)
        head = newnode(data, key);

    else{

        struct node *root = newnode(data, key);
        root->next = head;
        head=root;
    }
}
bool search(int data)
{
    struct node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == data)
            return true;
        else
            temp = temp->next;
    }
    return false;
}
struct node*  reverse(struct node **head_ref)
{
    struct node *prev = NULL;
    struct node *current = *head_ref;
    struct node *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

   return prev;
}

int main()  {

    FirstInsert(10,1);
    FirstInsert(20,2);
    FirstInsert(30,3);
display();
}
