#ifndef linkedlist_H

#define linkedlist_H
#define true 1
#define false 0
#define boolean unsigned char
#define nil NULL

#include <stdio.h>
#include <malloc.h>

typedef struct Node *address;
typedef struct Node
{
    int nilai;
    address next;
} Node;

//Konstruktor
void CreateNode(address *p);
void IsiNode(address *p, int nilai);

//Insert
void InsertFirst(address *p, address PNew);
void InsertLast(address *p, address PNew);
void InsertAfter(address *pBef, address PNew);

//Delete
void DeleteFirst(address *p, int *X);
void DeleteLast(address *p, int *X);
void DeleteAfter(address *pBef, int *X);
void DeleteOdd(address *p, int *X);

//Other
void Dealloc(address *p);
void PrintLinkedList (address p);
boolean isEmpty(address p);


#endif