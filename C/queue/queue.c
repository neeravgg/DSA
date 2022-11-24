#include <stdio.h>
#define n 10
struct queue
{
    int item[n];
    int rear, front;
} q;

void insert(int x)
{
    if (q.rear == n - 1)
        printf("queue is full");

    else
        q.item[++q.rear] = x;
}

int remove()
{
    if (q.rear == -1)
        printf("queue is already empty");

    else
        return q.item[q.front++];
}

void main()
{
    int x, i;
    q.rear = -1;
    q.front = 0;

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &x);
        insert(x);
    }
    for (i = 0; i < 9; i++)
    {
        remove(); 
    }
}
