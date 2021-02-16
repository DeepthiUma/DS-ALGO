// Queue
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cstdio>
using namespace std;

class Queue
{
private:
    int *item;
    int rear;
    int count;
    int front;
public:
Queue(int N)
{
    item = new int[N];
    front = -1;
    rear = -1;
    count = N;
}
void enqueue(int data)
{
    if(isFull()) cout<< "Queue is full" << endl;
    item[++rear] = data;
    count++;
}
void print()
{
    if(isEmpty()) cout << "Queue is Empty" << endl;
    for(int i=0;i<=rear;i++)
    cout << item[i] << endl;
}
bool isFull()
{
   return (count == rear);
}
bool isEmpty()
{
    return (rear == -1);
}
int dequeue()
{
    // 90 80 70
    // 0     3
    if(isEmpty()) 
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }
    front = 0;
    int n = item[front];
    for(int i=0;i<=rear;i++){
        item[i] = item[i+1];
    }
    rear--;
    count --;
    return n;
}
int peek()
{
    if(isEmpty()) cout << "Queue is Empty" << endl;
    return item[front];
}
};
int main()
{
    Queue *q = new Queue(5);
    q->enqueue(90);
    q->enqueue(80);
    q->enqueue(70);
    q->print();
    cout << "DEQUEUE" << q->dequeue() << endl;
    //cout << "DEQUEUE" << q->dequeue() << endl;
    //cout << "DEQUEUE" << q->dequeue() << endl;
    //cout << "DEQUEUE" << q->dequeue() << endl;
    //q->print();
    cout << "PEEK: " << q->peek() << endl;
    return 0;
}

