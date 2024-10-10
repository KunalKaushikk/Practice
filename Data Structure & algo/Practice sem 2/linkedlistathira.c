#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert_front()
{
    struct node *ptr;
    int value;
    scanf("%d", &value);
    ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = value;
    ptr->next = NULL;
    if (head == NULL)
    {
        ptr = head;
    }
    else
    {
        ptr->data = value;
        ptr->next = head;
        head = ptr;
    }
}
void insert_end()
{
    struct node *ptr, *temp;
    int value;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("Overflow");
        printf("\n");
    }
    else
    {
        scanf("%d", &value);
        ptr->data = value;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
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
void insert_location()
{
    struct node *ptr, *temp;
    int value, location, i;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("Overflow \n");
    }
    else
    {
        scanf("%d\n", &location);
        temp = head;
        scanf("%d", &value);
        ptr->data = value;
        printf("\n");
        for (i = 0; i < location; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("Can't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\n");
    }
}
void start_delete()
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
void end_delete()
{
    struct node *ptr, *ptr1;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (head == NULL)
    {
        printf("List is empty\n");
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
void delete_random()
{
    struct node *ptr, *ptr1;
    int location, i;
    scanf("%d", &location);
    ptr = head;
    for (i = 0; i < location; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;
        if (ptr == NULL)
        {
            printf("Can't delete\n");
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
void main()
{
    int choice = 0;
    while (choice != 8)
    {
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            insert_front();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_location();
            break;
        case 4:
            start_delete();
            break;
        case 5:
            end_delete();
            break;
        case 6:
            delete_random();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Please enter valid choice");
        }
    }
}