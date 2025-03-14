#include <stdio.h>
#include "linkedlist.h"
#define nilai(P) (P)->nilai
#define next(P) (P)->next
#define nil NULL

int main()
{
    address head = nil, temp;
    int input;
    printf("=========================\n");
    printf("  QUIZ KE-2 LINKED LIST  \n");
    printf("=========================\n");

    /*1. masukan bilangan 7 sebagai elemen pertama {insert first}*/
    input = 7;
    CreateNode(&temp);
    if (temp != nil)
    {
        IsiNode(&temp, input);
        InsertFirst(&head, temp);
    }

    if (!isEmpty(head))
    {
        printf("    /*1. masukan bilangan 7 sebagai elemen pertama {insert first}*/\n");
        printf("Isi linked list: ");
        PrintLinkedList(head);
    }

    /*2. masukan bilangan 11 sebagai elemen kedua {insert last}*/
    input = 11;
    CreateNode(&temp);
    if (temp != nil)
    {
        IsiNode(&temp, input);
        InsertLast(&head, temp);
    }

    if (!isEmpty(head))
    {
        printf("\n    /*2. masukan bilangan 11 sebagai elemen kedua {insert last}*/\n");
        printf("Isi linked list: ");
        PrintLinkedList(head);
    }

    /*3. masukan bilangan 9 diantara bil 7 dan bil 11 {insert after}*/
    input = 9;
    CreateNode(&temp);
    if (temp != nil)
    {
        IsiNode(&temp, input);
        address current = head;
        InsertAfter(&current, temp); // Insert after the first node (7)
    }

    if (!isEmpty(head))
    {
        printf("\n    /*3. masukan bilangan 9 diantara bil 7 dan bil 11 {insert after}*/\n");
        printf("Isi linked list: ");
        PrintLinkedList(head);
    }

    /*4. masukan bilangan 5 di awal list {insert first}*/
    input = 5;
    CreateNode(&temp);
    if (temp != nil)
    {
        IsiNode(&temp, input);
        InsertFirst(&head, temp);
    }

    if (!isEmpty(head))
    {
        printf("\n    /*4. masukan bilangan 5 di awal list {insert first}*/\n");
        printf("Isi linked list: ");
        PrintLinkedList(head);
    }

    /*5. masukan bilangan 13 di akhir list {insert last}*/
    input = 13;
    CreateNode(&temp);
    if (temp != nil)
    {
        IsiNode(&temp, input);
        InsertLast(&head, temp);
    }

    if (!isEmpty(head))
    {
        printf("\n    /*5. masukan bilangan 13 di akhir list {insert last}*/\n");
        printf("Isi linked list: ");
        PrintLinkedList(head);
    }

    /*6. hapus elemen terakhir (bilangan 13) pada list {delete last}*/
    if (!isEmpty(head))
    {
        int deleted;
        DeleteLast(&head, &deleted);
        printf("\n    /*6. hapus elemen terakhir (bilangan 13) pada list {delete last}*/\n");
        printf("Elemen yang dihapus: %d\n", deleted);
        printf("Isi linked list: ");
        PrintLinkedList(head);
    }

    /*7. hapus bilangan 7 pada list*/
    if (!isEmpty(head))
    {
        int deleted;
        address current = head;
        address prev = nil;

        while (current != nil && nilai(current) != 7)
        {
            prev = current;
            current = next(current);
        }

        if (current != nil)
        {
            if (prev == nil) 
            {
                DeleteFirst(&head, &deleted);
            }
            else 
            {
                DeleteAfter(&prev, &deleted);
            }
        }

        printf("\n/*7. hapus bilangan 7 pada list*/\n");
        printf("Elemen yang dihapus: %d\n", deleted);
        printf("Isi linked list: ");
        PrintLinkedList(head);
    }

    /*8. hapus elemen pertama (bilangan 5) pada list {delete first}*/
    if (!isEmpty(head))
    {
        int deleted;
        DeleteFirst(&head, &deleted);
        printf("\n    /*8. hapus elemen pertama (bilangan 5) pada list {delete first}*/\n");
        printf("Elemen yang dihapus: %d\n", deleted);
        printf("Isi linked list: ");
        PrintLinkedList(head);
    }

    /*9. hapus semua elemen list deret bilangan ganjil*/
    if (!isEmpty(head))
    {
        int deleted;
        DeleteOdd(&head, &deleted);
        printf("\n    /*9. hapus semua elemen list deret bilangan ganjil*/\n");
        if (isEmpty(head))
        {
            printf("Semua node telah dihapus\n");
        }
        else
        {
            printf("Isi linked list setelah menghapus bilangan ganjil: ");
            PrintLinkedList(head);
        }
    }

    return 0;
}