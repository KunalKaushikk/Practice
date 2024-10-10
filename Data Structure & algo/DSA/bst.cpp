#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int value;
    struct Node *left, *right;
};
struct Node *Newnode(int item)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->value = item;
    temp->left = temp->right = NULL;
    return temp;
}
void In_order(struct Node *root)
{
    if (root != NULL)
    {
        In_order(root->left);
        printf("%d ", root->value);
        In_order(root->right);
    }
}
void Pre_order(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->value);
        Pre_order(root->left);
        Pre_order(root->right);
    }
}
void Post_order(struct Node *root)
{
    if (root != NULL)
    {
        Post_order(root->left);
        Post_order(root->right);
        printf("%d ", root->value);
    }
}
struct Node *Insert(struct Node *node, int key)
{
    if (node == NULL)
        return Newnode(key);
    if (key < node->value)
        node->left = Insert(node->left, key);
    else if (key > node->value)
        node->right = Insert(node->right, key);
    return node;
}
struct Node *minValue(struct Node *node)
{
    struct Node *current = node;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}
struct Node *deleteNode(struct Node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->value)
        root->left = deleteNode(root->left, key);
    else if (key > root->value)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
        struct Node *temp = minValue(root->right);
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}
int min(struct Node *node)
{
    struct Node *current = node;
    while (current->left != NULL)
    {
        current = current->left;
    }
    return current->value;
}
int max(struct Node *node)
{
    struct Node *current = node;
    while (current->right != NULL)
    {
        current = current->right;
    }
    return current->value;
}
struct Node *search(struct Node *root, int key)
{
    if (root == NULL || root->value == key)
        return root;
    else
        printf("-1");
}
int main()
{
    int choice;
    int number, a, b, c, d, e, f, g, h, i, x, y;
    struct Node *root = NULL;
    while (1)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            scanf("%d", &number);
            scanf("%d", &a);
            root = Insert(root, a);
            Insert(root, a);
            scanf("%d", &b);
            Insert(root, b);
            scanf("%d", &c);
            Insert(root, c);
            scanf("%d", &d);
            Insert(root, d);
            scanf("%d", &e);
            Insert(root, e);
            scanf("%d", &f);
            Insert(root, f);
            scanf("%d", &g);
            Insert(root, g);
            scanf("%d", &h);
            Insert(root, h);
            scanf("%d", &i);
            Insert(root, i);
            break;
        }
        case 2:
        {
            scanf("%d", &y);
            search(root, y);
            printf("\n");
            break;
        }
        case 3:
        {
            In_order(root);
            printf("\n");
            break;
        }
        case 4:
        {
            Pre_order(root);
            printf("\n");
            break;
        }
        case 5:
        {
            Post_order(root);
            printf("\n");
            break;
        }
        case 6:
        {
            printf("%d", min(root));
            printf("\n");
            break;
        }
        case 7:
        {
            printf("%d", max(root));
            printf("\n");
            break;
        }
        case 8:
        {
            scanf("%d", &x);
            root = deleteNode(root, x);
            In_order(root);
            printf("\n");
            break;
        }
        case 9:
        {
            exit(1);
        }
        default:
            printf("incorrect choice");
        }
    }
    return 0;
}