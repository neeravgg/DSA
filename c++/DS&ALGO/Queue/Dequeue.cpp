#include <iostream>
using namespace std;

class Deq
{

public:
    int front, rear, size;
    unsigned capacity;
    int *arr;
    Deq(unsigned capacity)
    {
        front, rear = -1;
        this->capacity = capacity;
        arr = new int[capacity];
        size = 0;
    }

    int isFull();
    int isEmpty();
    void Front_insert(int data);
    int Front_delete();
    void Rear_insert(int data);
    int Rear_delete();
};

int Deq::isFull()
{
    if (front == 0 && rear == capacity - 1 || front == rear + 1)
    {
        cout << "The queue is FULL";
        return 1;
    }
    return 0;
}

int Deq::isEmpty()
{
    if (front == -1 && rear == -1)
    {
        cout << "The queue is EMPTY";
        return 1;
    }
    return 0;
}

void Deq::Front_insert(int data)
{
    if (isFull())
        return;

    if (front == -1)
    {
        front, rear = 0;
    }
    else if (front == 0)

        front = capacity - 1;

    else
        front--;

    arr[front] = data;
}

int Deq::Front_delete()
{

    if (isEmpty())
        return;

    int item = arr[front];

    if (front == capacity - 1)
    {
        front = 0;
    }
    else if (front == rear)
    {
        rear, front = -1;
    }
    else
        front++;

    return item;
}

void Deq::Rear_insert(int data)
{
    if (isFull)
        return;

    if (front == -1)
    {
        front, rear = 0;
    }
    else if (rear == capacity - 1)
    {
        rear = 0;
    }
    else
        rear++;
    arr[rear] = data;
}

int Deq::Rear_delete()
{
    if (isEmpty())
        return;

    int item = arr[rear];

    if (rear == front)
        front, rear = -1;

    else if (rear == 0)
        rear = capacity - 1;

    else
        rear--;

    return item;
}