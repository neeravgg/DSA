#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left = nullptr, *right = nullptr;

    Node() {}
    Node(int data) : data(data) {}
};

// Node *Create(Node *b, int data)
// {

//     if (b == NULL)
//     {
//         Node *root;
//         root->data = data;
//         return root;
//     }

//     if (data <= b->data)
//         b->left = Create(b->left, data);

//     else
//         b->right = Create(b->right, data);

//     return b;
// }

Node *insert(Node *root, int key)
{
    // if the root is null, create a new node and return it
    if (root == NULL)
    {
        return new Node(key);
    }

    // if the given key is less than the root node, recur for the left subtree
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    // if the given key is more than the root node, recur for the right subtree
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}
void print(Node *root)
{
    if (root != NULL)
    {
        print(root->left);
        cout << root->data << "  ";
        print(root->right);
    }
}

int main()
{
    int keys[] = {15, 10, 20, 8, 12, 16, 25};

    Node *root = nullptr;
    for (int key : keys)
    {
        root = insert(root, key);
    }
    print(root);
    return 0;
}
