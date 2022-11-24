#include <stdc++.h>
#include<iostream>
using namespace std;

struct Node
{

    int data;
    Node *left, *right = nullptr;

    Node(int data)
    {
        this->data = data;
    }
};

Node *insert(Node *root, int data)
{

    if (root == nullptr)
        return new Node(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}


int main()
{
 return 0;
}