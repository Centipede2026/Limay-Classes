#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int queue1[6];
int front = -1;
int rear = -1;
void enqueue()
{
    int x;
    cout << "Enter the no. = ";
    cin >> x;
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue1[rear] = x;
    }
    else if (front == 0 && rear == 5)
    {
        cout << "The Queue is Full" << endl;
    }
    else if (front != 0 && rear == 5)
    {
        rear = 0;
        queue1[rear] = x;
    }
    else
    {
        rear = rear + 1;
        queue1[rear] = x;
    }
}
void dequeuee()
{
    if (front == -1 && rear == -1)
    {
        cout << "No Element is Present" << endl;
    }
    else if (front == rear)
    {
        cout << "Element Present = " << queue1[front] << endl;
        front = rear = -1;
    }
    else
    {
        cout << "Deleted Element is = " << queue1[front] << endl;
        front = front + 1;
    }
}
void display()
{
    if (front == rear && front != -1 && rear != -1)
    {
        cout << "only one element present = " << queue1[front] << endl;
        front = rear = -1;
    }
    else if (front == -1 && rear == -1)
    {
        cout << "No element is present " << endl;
    }
    else
    {
        for (int j = front; j <= rear; j++)
        {
            cout << queue1[j] << " ";
        }
    }
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeuee();
    display();
}
