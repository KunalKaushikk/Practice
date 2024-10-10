#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insert_front();
void insert_end();
void insert_random();
void delete_front();
void delete_end();
void delete_random();
void display();
void count();
void exit();
void main()
{
    int choice = 0;
    while (choice != 9)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_front();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_random();
            break;
        case 4:
            delete_front();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_random();
            break;
        case 7:
            display();
            break;
        case 8:
            count();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Enter a valid choice:\n ");
        }
    }
}
void display()
{
    struct node *ptr;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next; // next or link same thing
    }
    printf("\n");
}
void insert_front()
{
    struct node *ptr;
    int value;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        scanf("%d ", &value);
        ptr->data = value;
        ptr->next = head;
        head = ptr;
        printf("\n");
    }
}
void count()
{
    int count = 0;
    struct node *head;
    if (head == NULL)
        printf("List is empty ");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = NULL;
    }
    printf("%d", count);
}
void insert_end()
{
    struct node *ptr, *temp;
    int value;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
        printf("\nOverflow");
    else
    {
        scanf("%d", &value);
        ptr->data = value;
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
void delete_random()
{
    struct node *ptr, *ptr1;
    int loc, i;
    scanf("%d", &loc);
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;
        if (ptr == NULL)
        {
            printf("Can't delete");
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
}
void insert_random()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        scanf("\n%d", &loc);
        temp = head;
        printf("\n");
        scanf("%d", &item);
        ptr->data = item;
        printf("\n");
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\n");
    }
}
void delete_front()
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
void delete_end()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("\nList is empty");
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