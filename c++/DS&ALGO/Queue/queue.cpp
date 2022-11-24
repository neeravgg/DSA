#include <iostream>
using namespace std;

class Queue
{
public:
    int front, rear, size;
    unsigned capacity;
    int *arr;

    Queue(unsigned capacity)
    {
        front, rear = -1;
        size = 0;
        this->capacity = capacity;
        arr = new int[capacity];
    }
    Queue()
    {
        front, rear = -1;
        size = 0;
        this->capacity = 10;
        arr = new int[10];
    }
};

int isFull(Queue *q)
{
    if (q->size == q->capacity)
    {
        cout << "The queue is FULL.";
        return 1;
    }
}
int isEmpty(Queue *q)
{
    if (q->size == 0 && q->front == -1)
    {
        cout << "The queue is EMPTY.";
        return 1;
    }
}
void Enqueue(Queue *q, int data)
{
    if (isFull(q))
    {
        return;
    }
    if (q->front == -1)
    {
        q->front, q->rear = 0;
        q->arr[q->rear] = data;
        return;
    }

    q->arr[++q->rear] = data;
    q->size++;
}
int Dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        return -1;
    }
    int item = q->arr[q->front++];
    q->size--;
    cout << item;
    return item;
}

int main()
{
    Queue *q = new Queue(20);
    Dequeue(q);

    return 0;
}