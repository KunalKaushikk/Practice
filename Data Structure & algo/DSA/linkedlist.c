#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int size = 0;
struct node *head;
int *toarray();
void startinsert();
void lastinsert();
void randominsert();
void startdelete();
void dltlast();
void dltrndm();
void display();
void search();
void main()
{
    int choice = 0;
    while (choice != 8)
    {
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            startinsert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            randominsert();
            break;
        case 4:
            startdelete();
            break;
        case 5:
            dltlast();
            break;
        case 6:
            dltrndm();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        case 9:
            int array[] = toarray();
            insertionSort(array, size);
        default:
            printf("Please enter valid choice");
        }
    }
}
int *toarray()
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        size++;
        ptr = ptr->next;
    }
    int arr[] = (int *)malloc(size * sizeof(int));
    int curr = 0;
    ptr = head;
    while (ptr->next != NULL)
    {
        arr[curr++] = ptr->data;
        ptr = ptr->next;
    }
    return arr;
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void startinsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n");
    }
}
void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\n");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\n");
        }
    }
}
void randominsert()
{
    int i, location, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        scanf("\n%d", &location);
        temp = head;
        printf("\n");
        scanf("%d", &item);
        ptr->data = item;
        printf("\n");

        for (i = 0; i < location; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr; //?how?
        printf("\n");
    }
}
void startdelete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
    }
}
void dltlast()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("\nlist is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }

    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
    }
}
void dltrndm()
{
    struct node *ptr, *ptr1;
    int vd, i;
    scanf("%d", &vd);
    ptr = head;
    for (i = 0; i < vd; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}