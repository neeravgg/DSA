#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insert(Node **head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

void del(Node **head, int key)
{
    if (head == NULL)
    {
        cout << "The list is empty";
        return;
    }
    Node *temp = *head;
    Node *prev = NULL;
    while (temp->next != NULL)
    {
        if (temp->next->data == key)
        {
            prev = temp->next;
            break;
        }
        temp = temp->next;
    }
    temp->next = temp->next->next;
    delete prev;
}

void print_list(Node **head)
{
    if (head == NULL)
    {
        cout << "The list is empty";
        return;
    }
    Node *temp = *head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void reverse(Node **head)
{
    Node *curr = *head;
    Node *next = NULL;
    Node *prev = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

Node* reverse_grp(Node *head, int k)
{
    if (head == NULL)
    {
        cout << "the list is empty.";
        return 0;
    }
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;
    while (curr != NULL && count++ < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if (next != NULL)
    {
        head->next = reverse_grp(next, k);
    }
   return prev;
}
int main()
{
    Node *head = NULL;
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
    head = reverse_grp(head, 2);
    // reverse(&head);
    // del(&head, 20);
    print_list(&head);
    return 0;
}