#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void Preordertraversal(struct Node *root)
{
    if (root == NULL)
    {

        return;
    }
    cout << root->data << " ";
    Preordertraversal(root->left);
    Preordertraversal(root->right);
}
void InorderTraversal(struct Node *root)
{
    if (root == NULL)
    {

        return;
    }
    InorderTraversal(root->left);
    cout << root->data << " ";
    InorderTraversal(root->right);
}
void Postordertraversal(struct Node *root)
{
    if (root == NULL)
    {

        return;
    }
    Postordertraversal(root->left);
    Postordertraversal(root->right);
    cout << root->data << " ";
}
int main()
{
    struct Node *root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->left = new Node(2);
    root->left->right = new Node(6);
    root->right->right = new Node(9);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(11);
    root->right->right->left = new Node(4);
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        InorderTraversal(root);
        break;
    case 2:
        Preordertraversal(root);
        break;
    case 3:
        Postordertraversal(root);
        break;
    }
    return 0;
}