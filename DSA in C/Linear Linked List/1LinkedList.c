#include<stdio.h>

typedef struct NODE
{
    int data;
    struct node *next;
}node;

node*st=NULL;
//Head NOde 


/* The above diagram shows a linked list st containing four elements. The link in each element accept the last 
points to it's successor. The link in the last element contains a NULL pointer, indicating the end of the list. 
We define an empty linked list to be a single pointer containing a NULL pointer. */
/*
NODES
The elements in a linked list are treditionally called nodes. A node in a linked list is a structure that has atleast
two fields, one contains data and other contains a pointer to the address to the next node in the sequence. 
The nodes in a linked list are called self-referenyial structures. In a self referential structure each instance of
the structure contains a point to another instance of the same structural type.

One of the attribute of the linked list is that there is not a physical relationship between the nodes, i.e. they 
are not stored continuously. When a linear list is stored in an array we know from the array structure where the 
list begins. The successor to each element is simply hte next element in the array but with the linked list there 
is no physical relationship between the nodes.

Without a physical relationship between the nodes we need pointers to distinguish the beginning of the list i.e. to
identify the first logical node in the list and the location of any given node's immediate successor. The pointer to
the beginning of the list is known as head pointer because it points to the node at the head of the list, in the 
above figure it is st. The pointers that identify a nodes immidiate successor are called next in figure
*/