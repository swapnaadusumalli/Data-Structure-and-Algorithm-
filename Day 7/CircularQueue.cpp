#include <iostream>
#define max 100

using namespace std;

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % max == front)
        return;
    else
    {
        rear = (rear + 1) % max;
        queue[rear] = x;
    }
}

void dequeue()
{
    if ((front == -1) && (rear == -1))
        return;
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % max;
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
        return;
    else
    {
        while (i <= rear)
        {
            cout << queue[i] << " ";
            i = (i + 1) % max;
        }
        cout << endl;
    }
}

int main()
{
    int c, x;
    do
    {
        cout << "0. Exit\n";
        cout << "1: Insert\n";
        cout << "2: Delete\n";
        cout << "3: Display\n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter element: ";
            cin >> x;
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    } while (c);
    return 0;
}